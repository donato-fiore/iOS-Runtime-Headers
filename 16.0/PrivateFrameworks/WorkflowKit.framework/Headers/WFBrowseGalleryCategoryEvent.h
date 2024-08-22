// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBROWSEGALLERYCATEGORYEVENT_H
#define WFBROWSEGALLERYCATEGORYEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFBrowseGalleryCategoryEvent : WFEvent

@property (copy, nonatomic) NSString *galleryCategoryIdentifier; // ivar: _galleryCategoryIdentifier
@property (copy, nonatomic) NSString *key; // ivar: _key


+(Class)codableEventClass;


@end


#endif