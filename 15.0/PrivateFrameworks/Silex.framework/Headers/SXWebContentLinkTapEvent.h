// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXWEBCONTENTLINKTAPEVENT_H
#define SXWEBCONTENTLINKTAPEVENT_H

@class NSString;


#import "SXLinkTapEvent.h"

@interface SXWebContentLinkTapEvent : SXLinkTapEvent

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 destinationURL:(id)arg1 ;


@end


#endif