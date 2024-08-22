// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI18JSHOSTCAPABILITIES_H
#define _TTC7MUSICUI18JSHOSTCAPABILITIES_H

@class JSValue;
@protocol _TtP7MusicUIP33_0B8C0A2B2A50A7F4980B53A7FABB940B24JSHostCapabilitiesExport_;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI18JSHostCapabilities : NSObject <_TtP7MusicUIP33_0B8C0A2B2A50A7F4980B53A7FABB940B24JSHostCapabilitiesExport_>

 {
    ? _hasGlobalNavigationStack;
    ? _shelfPagination;
    ? _popoverSelector;
    ? _groupedTextLinkSectionSupportsMultipleLinks;
    ? _socialCapabilities;
}


@property (nonatomic, retain) JSValue *groupedTextLinkSectionSupportsMultipleLinks;
@property (nonatomic, retain) JSValue *hasGlobalNavigationStack;
@property (nonatomic, retain) JSValue *popoverSelector;
@property (nonatomic, retain) JSValue *shelfPagination;
@property (nonatomic, retain) JSValue *socialCapabilities;


-(id)init;


@end


#endif