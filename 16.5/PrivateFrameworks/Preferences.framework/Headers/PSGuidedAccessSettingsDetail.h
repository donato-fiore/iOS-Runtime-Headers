// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGUIDEDACCESSSETTINGSDETAIL_H
#define PSGUIDEDACCESSSETTINGSDETAIL_H

@class NSString;
@protocol PSSettingsDetail;

#import <Foundation/Foundation.h>


@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)guidedAccessHasPasscode;
+(NSUInteger)guidedAccessAvailability;
+(id)iconImage;
+(id)preferencesURL;
+(void)enterGuidedAccessMode;
+(void)setGuidedAccessSwitchEnabled:(BOOL)arg0 ;


@end


#endif