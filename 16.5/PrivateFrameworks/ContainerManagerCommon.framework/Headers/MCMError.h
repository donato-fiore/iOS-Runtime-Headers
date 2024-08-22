// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMERROR_H
#define MCMERROR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCMError : NSObject <NSCopying>



@property (readonly, nonatomic) int POSIXerrno; // ivar: _POSIXerrno
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMCMError:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fullDescription;
-(id)init;
-(id)initWithErrorType:(NSUInteger)arg0 ;
-(id)initWithErrorType:(NSUInteger)arg0 category:(NSUInteger)arg1 ;
-(id)initWithErrorType:(NSUInteger)arg0 category:(NSUInteger)arg1 path:(id)arg2 POSIXerrno:(int)arg3 ;
-(id)initWithLibsystemError:(struct container_error_extended_s *)arg0 ;
-(id)initWithNSError:(id)arg0 url:(id)arg1 defaultErrorType:(NSUInteger)arg2 ;
-(struct container_error_extended_s *)libsystemError;


@end


#endif