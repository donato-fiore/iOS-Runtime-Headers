// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19CONTACTLESSREADERUI9WEAKTAPUI_H
#define _TTC19CONTACTLESSREADERUI9WEAKTAPUI_H

@class SwiftObject;
@protocol _TtP15ProximityReader5TapUI_;



@interface _TtC19ContactlessReaderUI9WeakTapUI : SwiftObject <_TtP15ProximityReader5TapUI_>

 {
    ? ui;
}




-(void)closeUI;
-(void)closeUIImmediate;
-(void)updateWithTransactionState:(NSInteger)arg0 ;
-(void)vasReadSuccessWithMerchantNames:(id)arg0 ;


@end


#endif