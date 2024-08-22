// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCDISAMBIGUATIONCONTEXT_H
#define PCDISAMBIGUATIONCONTEXT_H

@class NSData;
@protocol NSSecureCoding, PCActivity;

#import <Foundation/Foundation.h>

#import "PCDeviceIdentifier.h"
#import "PCHomeKitIdentifier.h"

@interface PCDisambiguationContext : NSObject <NSSecureCoding>

 {
    NSData *_activityData;
}


@property (readonly, nonatomic) NSObject<PCActivity> *activity; // ivar: _activity
@property (readonly, nonatomic) PCDeviceIdentifier *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) PCHomeKitIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger interactionDirection; // ivar: _interactionDirection


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 direction:(NSInteger)arg1 activityData:(id)arg2 ;
-(id)leadingImage;
-(id)subtitleText;
-(id)titleText;
-(void)cacheActivityData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif