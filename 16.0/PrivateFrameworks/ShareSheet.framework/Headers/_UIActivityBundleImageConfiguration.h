// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYBUNDLEIMAGECONFIGURATION_H
#define _UIACTIVITYBUNDLEIMAGECONFIGURATION_H

@class UIImage, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding>

 {
    UIImage *_fetchedImage;
}


@property (nonatomic) NSInteger activityCategory; // ivar: _activityCategory
@property (copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (readonly, nonatomic) UIImage *fetchedImage;
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageName:(id)arg0 bundlePath:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif