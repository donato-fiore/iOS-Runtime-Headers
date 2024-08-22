// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMFILEATTRIBUTES_H
#define BMFILEATTRIBUTES_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BMFileAttributes : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSUInteger protectionClass; // ivar: _protectionClass


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 mode:(NSUInteger)arg1 protectionClass:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif