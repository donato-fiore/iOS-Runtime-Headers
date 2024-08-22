// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUFACERECOGNITIONADDPERSONSEARCHBAR_H
#define HUFACERECOGNITIONADDPERSONSEARCHBAR_H

@class UIView, NSArray, NSString, UIImageView, UITextField;
@protocol HUSearchBar;



@interface HUFaceRecognitionAddPersonSearchBar : UIView <HUSearchBar>



@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIImageView *faceCropView; // ivar: _faceCropView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UITextField *searchTextField; // ivar: _searchTextField
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly) Class superclass;


+(BOOL)requiresConstraintBasedLayout;
-(id)init;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif