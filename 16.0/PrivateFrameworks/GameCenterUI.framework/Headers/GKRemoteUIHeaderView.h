// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKREMOTEUIHEADERVIEW_H
#define GKREMOTEUIHEADERVIEW_H

@class UIView, NSString;
@protocol RUIHeader;


#import "GKLabel.h"

@interface GKRemoteUIHeaderView : UIView <RUIHeader>



@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) BOOL isFirstSection; // ivar: _isFirstSection
@property (readonly) Class superclass;
@property (retain, nonatomic) GKLabel *textLabel; // ivar: _textLabel


-(CGFloat)headerHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 ;
-(void)setSectionIsFirst:(BOOL)arg0 ;


@end


#endif