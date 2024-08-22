// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLLECTIONLAYOUTLISTCONFIGURATION_H
#define UICOLLECTIONLAYOUTLISTCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIListSeparatorConfiguration.h"

@interface UICollectionLayoutListConfiguration : NSObject <NSCopying>



@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) CGFloat _cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic, getter=_didEndSwipingHandler, setter=_setDidEndSwipingHandler:) id *_didEndSwipingHandler; // ivar: _didEndSwipingHandler
@property (copy, nonatomic, getter=_willBeginSwipingHandler, setter=_setWillBeginSwipingHandler:) id *_willBeginSwipingHandler; // ivar: _willBeginSwipingHandler
@property (readonly, nonatomic) NSInteger appearance; // ivar: _appearance
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger footerMode; // ivar: _footerMode
@property (nonatomic) NSInteger headerMode; // ivar: _headerMode
@property (nonatomic) CGFloat headerTopPadding; // ivar: _headerTopPadding
@property (copy, nonatomic) id *itemSeparatorHandler; // ivar: _itemSeparatorHandler
@property (copy, nonatomic) id *leadingSwipeActionsConfigurationProvider; // ivar: _leadingSwipeActionsConfigurationProvider
@property (copy, nonatomic) UIListSeparatorConfiguration *separatorConfiguration; // ivar: _separatorConfiguration
@property (nonatomic) BOOL showsSeparators; // ivar: _showsSeparators
@property (copy, nonatomic) id *trailingSwipeActionsConfigurationProvider; // ivar: _trailingSwipeActionsConfigurationProvider


-(id)_spiConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAppearance:(NSInteger)arg0 ;


@end


#endif