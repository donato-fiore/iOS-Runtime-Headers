// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMFILEATTRIBUTES_H
#define BMFILEATTRIBUTES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BMFileAttributes : NSObject <NSCopying>



@property (retain, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) NSUInteger permission; // ivar: _permission
@property (nonatomic) NSUInteger protectionClass; // ivar: _protectionClass


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFilePath:(id)arg0 permission:(NSUInteger)arg1 protectionClass:(NSUInteger)arg2 ;


@end


#endif