// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBIMAGE_H
#define BBIMAGE_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBImage : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *path; // ivar: _path


+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg0 ;
+(id)imageWithName:(id)arg0 inBundle:(id)arg1 ;
+(id)imageWithName:(id)arg0 inBundlePath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 path:(id)arg1 name:(id)arg2 bundlePath:(id)arg3 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif