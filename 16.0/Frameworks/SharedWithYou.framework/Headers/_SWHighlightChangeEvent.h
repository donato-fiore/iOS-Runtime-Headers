// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWHIGHLIGHTCHANGEEVENT_H
#define _SWHIGHLIGHTCHANGEEVENT_H

@class NSString, NSURL;
@protocol _SWHighlightEventProtocol;


#import "SWHighlightChangeEvent.h"

@interface _SWHighlightChangeEvent : SWHighlightChangeEvent <_SWHighlightEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *highlightURL;
@property (readonly) Class superclass;


-(id)initWithHighlightURL:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif