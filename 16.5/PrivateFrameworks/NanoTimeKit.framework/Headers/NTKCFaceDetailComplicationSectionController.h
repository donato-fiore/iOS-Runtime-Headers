// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILCOMPLICATIONSECTIONCONTROLLER_H
#define NTKCFACEDETAILCOMPLICATIONSECTIONCONTROLLER_H

@class NSSet, NSMutableArray;
@protocol NTKCFaceDetailComplicationSectionDelegate;


#import "NTKCFaceDetailSectionController.h"
#import "NTKFaceView.h"
#import "NTKCFaceDetailComplicationsHiddenCell.h"

@interface NTKCFaceDetailComplicationSectionController : NTKCFaceDetailSectionController

@property (weak, nonatomic) NSObject<NTKCFaceDetailComplicationSectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (retain, nonatomic) NTKCFaceDetailComplicationsHiddenCell *hiddenCell; // ivar: _hiddenCell
@property (retain, nonatomic) NSSet *richComplicationSlots; // ivar: _richComplicationSlots
@property (retain, nonatomic) NSMutableArray *rows;


+(BOOL)hasComplicationsForFace:(id)arg0 ;
-(BOOL)_canSelectRow:(NSInteger)arg0 ;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 faceView:(id)arg2 inGallery:(BOOL)arg3 ;
-(id)titleForHeader;
-(void)_addComplication:(id)arg0 ;
-(void)_commonInit;
-(void)didSelectRow:(NSInteger)arg0 ;
-(void)faceDidChange;


@end


#endif