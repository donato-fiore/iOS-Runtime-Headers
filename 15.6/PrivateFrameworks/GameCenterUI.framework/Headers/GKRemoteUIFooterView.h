// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKREMOTEUIFOOTERVIEW_H
#define GKREMOTEUIFOOTERVIEW_H

@class UIView, NSString;
@protocol RemoteUITableFooter;


#import "GKLabel.h"

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter>



@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int layoutStyle; // ivar: _layoutStyle
@property (nonatomic) CGFloat leftMargin; // ivar: _leftMargin
@property (nonatomic) CGFloat paragraphMargin; // ivar: _paragraphMargin
@property (nonatomic) CGFloat rightMargin; // ivar: _rightMargin
@property (nonatomic) BOOL shouldApplyGameCenterTheme; // ivar: _shouldApplyGameCenterTheme
@property (readonly) Class superclass;
@property (retain, nonatomic) GKLabel *textLabel; // ivar: _textLabel


-(CGFloat)footerHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)attributedStringForString:(id)arg0 withStyle:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 ;


@end


#endif