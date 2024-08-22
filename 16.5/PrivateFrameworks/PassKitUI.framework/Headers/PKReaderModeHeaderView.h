// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREADERMODEHEADERVIEW_H
#define PKREADERMODEHEADERVIEW_H

@class PKPaymentSetupProduct, NSArray, NSDictionary;


#import "PKTableHeaderView.h"

@interface PKReaderModeHeaderView : PKTableHeaderView {
    PKPaymentSetupProduct *_product;
    NSArray *_resourceKeys;
    NSInteger _context;
    NSDictionary *_readerModeResources;
}


@property (nonatomic) NSUInteger state; // ivar: _state


-(id)_subtitleForState:(NSUInteger)arg0 ;
-(id)_titleForState:(NSUInteger)arg0 ;
-(id)initWithState:(NSUInteger)arg0 context:(NSInteger)arg1 product:(id)arg2 ;
-(void)_configureForCurrentState;
-(void)layoutSubviews;


@end


#endif