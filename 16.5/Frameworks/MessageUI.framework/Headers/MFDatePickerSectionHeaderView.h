// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDATEPICKERSECTIONHEADERVIEW_H
#define MFDATEPICKERSECTIONHEADERVIEW_H

@class UICollectionReusableView, NSString, UILabel;
@protocol MFReusableIdentifiable;



@interface MFDatePickerSectionHeaderView : UICollectionReusableView <MFReusableIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (readonly) Class superclass;


+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif