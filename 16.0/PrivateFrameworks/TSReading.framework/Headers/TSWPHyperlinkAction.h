// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPHYPERLINKACTION_H
#define TSWPHYPERLINKACTION_H

@class TSDRep<TSWPHyperlinkHostRepProtocol>;


#import "TSWPTwoPartAction.h"
#import "TSWPHyperlinkField.h"

@interface TSWPHyperlinkAction : TSWPTwoPartAction {
    TSWPHyperlinkField *_hyperlinkField;
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hyperlinkRep;
}




+(id)hyperlinkActionWithHyperlink:(id)arg0 inRep:(id)arg1 action:(id)arg2 ;
-(id)initWithHyperlink:(id)arg0 inRep:(id)arg1 action:(id)arg2 ;
-(void)dealloc;


@end


#endif