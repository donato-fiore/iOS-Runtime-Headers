// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XBMUTABLESTATUSBARSETTINGS_H
#define XBMUTABLESTATUSBARSETTINGS_H



#import "XBStatusBarSettings.h"

@interface XBMutableStatusBarSettings : XBStatusBarSettings

@property (nonatomic, getter=isBackgroundActivityEnabled) BOOL backgroundActivityEnabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) NSInteger style;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif