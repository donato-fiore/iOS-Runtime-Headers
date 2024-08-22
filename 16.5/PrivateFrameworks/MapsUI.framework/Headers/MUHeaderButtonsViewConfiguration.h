// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUHEADERBUTTONSVIEWCONFIGURATION_H
#define MUHEADERBUTTONSVIEWCONFIGURATION_H

@class NSArray;
@protocol MUHeaderButtonMenuActionProvider;

#import <Foundation/Foundation.h>


@interface MUHeaderButtonsViewConfiguration : NSObject

@property (nonatomic) CGFloat detourTime; // ivar: _detourTime
@property (weak, nonatomic) NSObject<MUHeaderButtonMenuActionProvider> *menuProvider; // ivar: _menuProvider
@property (copy, nonatomic) NSArray *possibleAnalyticActions; // ivar: _possibleAnalyticActions
@property (nonatomic) BOOL showMoreButton; // ivar: _showMoreButton




@end


#endif