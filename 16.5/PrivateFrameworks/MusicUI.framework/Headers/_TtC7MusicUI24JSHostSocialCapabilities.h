// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI24JSHOSTSOCIALCAPABILITIES_H
#define _TTC7MUSICUI24JSHOSTSOCIALCAPABILITIES_H

@class JSValue;
@protocol _TtP7MusicUIP33_DCFB1A3319902F6C8246C789BF001DE530JSHostSocialCapabilitiesExport_;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI24JSHostSocialCapabilities : NSObject <_TtP7MusicUIP33_DCFB1A3319902F6C8246C789BF001DE530JSHostSocialCapabilitiesExport_>

 {
    ? _socialOnboarding;
    ? _socialCards;
}


@property (nonatomic, retain) JSValue *socialCards;
@property (nonatomic, retain) JSValue *socialOnboarding;


-(id)init;


@end


#endif