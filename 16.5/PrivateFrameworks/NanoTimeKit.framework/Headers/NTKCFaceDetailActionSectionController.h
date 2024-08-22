// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILACTIONSECTIONCONTROLLER_H
#define NTKCFACEDETAILACTIONSECTIONCONTROLLER_H

@protocol NTKCFaceDetailActionSectionDelegate;


#import "NTKCFaceDetailSectionController.h"
#import "NTKCFaceDetailActionCell.h"

@interface NTKCFaceDetailActionSectionController : NTKCFaceDetailSectionController

@property (weak, nonatomic) NSObject<NTKCFaceDetailActionSectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NTKCFaceDetailActionCell *deleteCell; // ivar: _deleteCell
@property (retain, nonatomic) NTKCFaceDetailActionCell *selectCell; // ivar: _selectCell


-(BOOL)_canSelectRow:(NSInteger)arg0 ;
-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(NSInteger)_actionForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)_spacerCell;
-(id)cellForRow:(NSInteger)arg0 ;
-(void)_commonInit;
-(void)didSelectRow:(NSInteger)arg0 ;


@end


#endif