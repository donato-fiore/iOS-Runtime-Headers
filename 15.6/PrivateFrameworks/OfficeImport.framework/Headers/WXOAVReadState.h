// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WXOAVREADSTATE_H
#define WXOAVREADSTATE_H

@class NSMutableDictionary;


#import "OAVReadState.h"
#import "WXReadState.h"
#import "WDParagraph.h"

@interface WXOAVReadState : OAVReadState {
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}




-(id)currentParagraph;
-(id)initWithWXReadState:(id)arg0 ;
-(id)nextVmlShapeIdToTextBoxMap;
-(id)wxReadState;
-(void)setCurrentParagraph:(id)arg0 ;


@end


#endif