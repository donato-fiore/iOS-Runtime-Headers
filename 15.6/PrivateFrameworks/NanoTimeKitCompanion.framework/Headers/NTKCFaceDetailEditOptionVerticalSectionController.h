// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILEDITOPTIONVERTICALSECTIONCONTROLLER_H
#define NTKCFACEDETAILEDITOPTIONVERTICALSECTIONCONTROLLER_H

@class NSString, NSMutableArray;


#import "NTKCFaceDetailEditOptionSectionController.h"
#import "NTKCFaceDetailDescriptionCell.h"

@interface NTKCFaceDetailEditOptionVerticalSectionController : NTKCFaceDetailEditOptionSectionController

@property (retain, nonatomic) NSString *footer; // ivar: _footer
@property (retain, nonatomic) NTKCFaceDetailDescriptionCell *footerCell; // ivar: _footerCell
@property (retain, nonatomic) NSMutableArray *rows;


-(BOOL)_canSelectRow:(NSInteger)arg0 ;
-(BOOL)collectionChanged:(id)arg0 withSelectedOptions:(id)arg1 ;
-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)cellForRow:(NSInteger)arg0 ;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 editOptionCollection:(id)arg3 faceView:(id)arg4 ;
-(void)_setupWithCollection:(id)arg0 ;
-(void)didSelectRow:(NSInteger)arg0 ;
-(void)faceDidChange;
-(void)reloadActionRow;
-(void)setSelectedOptions:(id)arg0 ;


@end


#endif