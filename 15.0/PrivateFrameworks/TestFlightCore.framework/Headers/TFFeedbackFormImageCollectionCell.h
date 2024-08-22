// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKFORMIMAGECOLLECTIONCELL_H
#define TFFEEDBACKFORMIMAGECOLLECTIONCELL_H

@class NSString, NSMutableArray;
@protocol UITextFieldDelegate;


#import "TFFeedbackFormBaseCell.h"
#import "TFFeedbackEntryImageCollection.h"

@interface TFFeedbackFormImageCollectionCell : TFFeedbackFormBaseCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TFFeedbackEntryImageCollection *imageCollectionEntry; // ivar: _imageCollectionEntry
@property (readonly, nonatomic) NSMutableArray *imageViews; // ivar: _imageViews
@property (readonly) Class superclass;


+(struct CGSize )_sizeForImage:(id)arg0 constrainedToWidth:(CGFloat)arg1 ;
+(struct CGSize )_sizeForImages:(id)arg0 fittingSize:(struct CGSize )arg1 inTraitEnvironment:(id)arg2 ;
+(struct CGSize )sizeForEntry:(id)arg0 dataSource:(id)arg1 fittingSize:(struct CGSize )arg2 inTraitEnvironment:(id)arg3 ;
+(struct UIEdgeInsets )_imageViewInsetsInTraitEnvironment:(id)arg0 ;
-(NSUInteger)displayableDataType;
-(id)_createImageView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupImagesViewsForImages:(id)arg0 ;
-(void)applyContentsOfEntry:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDisplayedDataImageCollection:(id)arg0 ;


@end


#endif