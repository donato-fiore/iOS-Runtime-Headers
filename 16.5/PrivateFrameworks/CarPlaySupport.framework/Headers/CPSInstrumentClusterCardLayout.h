// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSINSTRUMENTCLUSTERCARDLAYOUT_H
#define CPSINSTRUMENTCLUSTERCARDLAYOUT_H


#import <Foundation/Foundation.h>


@interface CPSInstrumentClusterCardLayout : NSObject

@property (nonatomic) NSUInteger layoutForCard; // ivar: _layoutForCard
@property (nonatomic) CGRect safeAreaFrame; // ivar: _safeAreaFrame
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (nonatomic) BOOL showETAWithTurnCard; // ivar: _showETAWithTurnCard
@property (nonatomic) CGRect viewAreaFrame; // ivar: _viewAreaFrame


-(id)initWithSafeAreaFrame:(struct CGRect )arg0 viewAreaFrame:(struct CGRect )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif