// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIINTERACTIONFORWARDINGVIEW_H
#define SBUIINTERACTIONFORWARDINGVIEW_H

@class UIView, NSHashTable, NSSet;



@interface SBUIInteractionForwardingView : UIView {
    NSHashTable *_ignoreAlphaSubviewsTable;
}


@property (copy, nonatomic) NSSet *ignoreAlphaSubviews;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)addIgnoreAlphaSubview:(id)arg0 ;
-(void)removeIgnoreAlphaSubview:(id)arg0 ;


@end


#endif