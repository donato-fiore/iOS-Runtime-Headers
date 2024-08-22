// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGALLERYSESSIONBROWSECATEGORYEVENT_H
#define WFGALLERYSESSIONBROWSECATEGORYEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFGallerySessionBrowseCategoryEvent : WFEvent

@property (copy, nonatomic) NSString *galleryCategoryIdentifier; // ivar: _galleryCategoryIdentifier
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


+(Class)codableEventClass;


@end


#endif