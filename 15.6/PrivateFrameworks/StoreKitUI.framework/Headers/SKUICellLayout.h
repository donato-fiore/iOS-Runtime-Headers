// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICELLLAYOUT_H
#define SKUICELLLAYOUT_H

@class UIView;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUICellLayout : NSObject {
    BOOL _parentWantsCellNeedsLayout;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, weak, nonatomic) UIView *parentCellView; // ivar: _cell


-(id)initWithCollectionViewCell:(id)arg0 ;
-(id)initWithParentView:(id)arg0 ;
-(id)initWithTableViewCell:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)resetLayout;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setNeedsLayout;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif