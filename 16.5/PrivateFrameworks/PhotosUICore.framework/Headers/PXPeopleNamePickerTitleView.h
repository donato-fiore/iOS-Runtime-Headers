// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLENAMEPICKERTITLEVIEW_H
#define PXPEOPLENAMEPICKERTITLEVIEW_H

@class UIView, UIImageView, NSString, PHFace, NSMutableArray, UITextField, UIFont, PHPerson;
@protocol PXPhotoLibraryUIChangeObserver;



@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver>



@property (readonly, nonatomic) UIImageView *avatarView; // ivar: _avatarView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHFace *face; // ivar: _face
@property (readonly, nonatomic) NSMutableArray *fetchResults; // ivar: _fetchResults
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) UITextField *nameField; // ivar: _nameField
@property (retain, nonatomic) UIFont *nameFont; // ivar: _nameFont
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (retain, nonatomic) UIFont *placeholderFont; // ivar: _placeholderFont
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 face:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 person:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 person:(id)arg1 face:(id)arg2 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_updateFieldPlaceholder;
-(void)_updateFieldText;
-(void)dealloc;
-(void)finishEditing;
-(void)resetImages;


@end


#endif