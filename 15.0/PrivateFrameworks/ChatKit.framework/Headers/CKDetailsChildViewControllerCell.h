// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSCHILDVIEWCONTROLLERCELL_H
#define CKDETAILSCHILDVIEWCONTROLLERCELL_H

@class UIView, NSString;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsChildViewControllerCell : CKDetailsCell <CKDetailsCell>



@property (retain, nonatomic) UIView *childViewControllerView; // ivar: _childViewControllerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldUseLayoutMargins; // ivar: _shouldUseLayoutMargins
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif