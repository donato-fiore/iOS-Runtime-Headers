// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIMODERNHEADERVIEW_H
#define RUIMODERNHEADERVIEW_H

@class OBHeaderView, NSString, UILabel;
@protocol RUIHeader;



@interface RUIModernHeaderView : OBHeaderView <RUIHeader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) NSString *subHeaderText; // ivar: _subHeaderText
@property (readonly) Class superclass;


-(CGFloat)bottomPadding;
-(CGFloat)headerHeightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(CGFloat)iconHeight;
-(CGFloat)iconToHeaderLabelPadding;
-(CGFloat)topPadding;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(void)setIconImage:(id)arg0 ;
-(void)setText:(id)arg0 attributes:(id)arg1 ;
-(void)updateDetailText;


@end


#endif