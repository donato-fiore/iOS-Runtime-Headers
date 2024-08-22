// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCFACEDETAILOTHERSECTIONCONTROLLER_H
#define NTKCFACEDETAILOTHERSECTIONCONTROLLER_H

@class NSString;
@protocol NTKCFaceDetailToggleCellDelegate, NTKCFaceDetailOtherSectionDelegate;


#import "NTKCFaceDetailSectionController.h"
#import "NTKCFaceDetailMonogramComplicationCell.h"
#import "NTKCFaceDetailMonogramEditCell.h"
#import "NTKCFaceDetailShowSecondsCell.h"

@interface NTKCFaceDetailOtherSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailOtherSectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKCFaceDetailMonogramComplicationCell *monogramCell; // ivar: _monogramCell
@property (retain, nonatomic) NTKCFaceDetailMonogramEditCell *monogramEditCell; // ivar: _monogramEditCell
@property (retain, nonatomic) NTKCFaceDetailShowSecondsCell *showSecondsCell; // ivar: _showSecondsCell
@property (readonly) Class superclass;


-(BOOL)_canSelectRow:(NSInteger)arg0 ;
-(id)titleForHeader;
-(void)_addMonogramEditRow;
-(void)_commonInit;
-(void)_removeMonogramEditRow;
-(void)addMonogramRowForSlot:(id)arg0 ;
-(void)addShowSecondsRow:(id)arg0 ;
-(void)didSelectRow:(NSInteger)arg0 ;
-(void)faceDidChange;
-(void)removeMonogramRow;
-(void)removeShowSecondsRow;
-(void)toggleCell:(id)arg0 didToggle:(BOOL)arg1 ;


@end


#endif