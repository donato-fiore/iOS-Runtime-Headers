// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACEDESCRIPTOR_H
#define NTKFACEDESCRIPTOR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKFaceDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) Class faceClass;
@property (readonly, nonatomic) NSInteger faceStyle; // ivar: _faceStyle


+(BOOL)supportsSecureCoding;
-(BOOL)isAvailableForDevice:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithFaceStyle:(NSInteger)arg0 bundleIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceStyle:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif