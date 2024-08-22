// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCFACEDETAILEDITOPTIONHORIZONTALSECTIONCONTROLLER_H
#define NTKCFACEDETAILEDITOPTIONHORIZONTALSECTIONCONTROLLER_H

@class NSString, NSMutableArray;
@protocol NTKCFaceDetailEditOptionCellDelegate;


#import "NTKCFaceDetailEditOptionSectionController.h"
#import "NTKCFaceDetailEditOptionCell.h"

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <NTKCFaceDetailEditOptionCellDelegate>



@property (retain, nonatomic) NTKCFaceDetailEditOptionCell *cell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *rows;
@property (readonly) Class superclass;


-(BOOL)collectionChanged:(id)arg0 withSelectedOptions:(id)arg1 ;
-(Class)editCellClass;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 editOptionCollection:(id)arg3 faceView:(id)arg4 ;
-(void)didSelectRow:(NSInteger)arg0 ;
-(void)editOptionCell:(id)arg0 didSelectOptionAtIndex:(NSInteger)arg1 ;
-(void)reloadActionRow;
-(void)setSelectedOptions:(id)arg0 ;


@end


#endif