// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUGROUPEDACTIONSROWVIEWCONFIGURATION_H
#define MUGROUPEDACTIONSROWVIEWCONFIGURATION_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface MUGroupedActionsRowViewConfiguration : NSObject

@property (retain, nonatomic) UIColor *itemBackgroundColor; // ivar: _itemBackgroundColor
@property (retain, nonatomic) UIColor *itemHighlightColor; // ivar: _itemHighlightColor
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) BOOL useVibrancy; // ivar: _useVibrancy


+(id)defaultConfiguration;
-(id)initWithStyle:(NSInteger)arg0 useVibrancy:(BOOL)arg1 ;


@end


#endif