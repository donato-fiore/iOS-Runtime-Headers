// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUMEDUSASETTINGS_H
#define PUMEDUSASETTINGS_H

@class PXSettings;



@interface PUMedusaSettings : PXSettings

@property (nonatomic) CGFloat _desiredWidth; // ivar: __desiredWidth
@property (nonatomic) CGFloat _testIncrement; // ivar: __testIncrement
@property (nonatomic) CGFloat _testInterval; // ivar: __testInterval
@property (nonatomic) CGFloat _testStartDelay; // ivar: __testStartDelay
@property (nonatomic) CGFloat _widthDelay; // ivar: __widthDelay


+(id)settingsControllerModule;
+(id)sharedInstance;
+(void)runSizeTest;
-(id)parentSettings;


@end


#endif