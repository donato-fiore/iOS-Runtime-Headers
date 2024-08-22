// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILDESCRIPTIONSECTIONCONTROLLER_H
#define NTKCFACEDETAILDESCRIPTIONSECTIONCONTROLLER_H

@class NSString;
@protocol NTKCFaceDetailExpandableDescriptionCellDelegate, NTKCFaceDetailDescriptionSectionDelegate;


#import "NTKCFaceDetailSectionController.h"
#import "NTKCFaceDetailExpandableDescriptionCell.h"

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailExpandableDescriptionCellDelegate>



@property (retain, nonatomic) NTKCFaceDetailExpandableDescriptionCell *cell;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailDescriptionSectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL external; // ivar: _external
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasDescriptionSectionForFace:(id)arg0 inGallery:(BOOL)arg1 orExternal:(BOOL)arg2 ;
+(id)_descriptionForFace:(id)arg0 inGallery:(BOOL)arg1 orExternal:(BOOL)arg2 ;
-(id)_faceDescription;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 external:(BOOL)arg3 ;
-(id)titleForHeader;
-(void)_commonInit;
-(void)descriptionCellDidExpand:(id)arg0 ;
-(void)faceDidChange;


@end


#endif