// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPERSONFACECROPTABLECELL_H
#define HUPERSONFACECROPTABLECELL_H

@class UITableViewCell, NSArray, NSString, UIImageView, UIImage, HFItem, HMFaceCrop;
@protocol HUCellProtocol, HUResizableCellDelegate;



@interface HUPersonFaceCropTableCell : UITableViewCell <HUCellProtocol>



@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImageView *faceCropView; // ivar: _faceCropView
@property (retain, nonatomic) UIImage *faceImage; // ivar: _faceImage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) HMFaceCrop *personFaceCrop; // ivar: _personFaceCrop
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif