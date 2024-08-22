// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWHIGHLIGHTMENTIONEVENT_H
#define _SWHIGHLIGHTMENTIONEVENT_H

@class NSString, NSURL;
@protocol _SWHighlightEventProtocol;


#import "SWHighlightMentionEvent.h"

@interface _SWHighlightMentionEvent : SWHighlightMentionEvent <_SWHighlightEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *highlightURL;
@property (readonly) Class superclass;


-(id)initWithHighlight:(id)arg0 mentionedPerson:(id)arg1 ;


@end


#endif