// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLCHOOSERCONTROLSPEC_H
#define TSTCELLCHOOSERCONTROLSPEC_H

@class NSArray;


#import "TSTCellSpec.h"
#import "TSTPopUpMenuModel.h"

@interface TSTCellChooserControlSpec : TSTCellSpec {
    NSArray *_displayChoices;
}


@property (readonly, nonatomic) NSArray *displayChoicesForInspector;
@property (retain, nonatomic) TSTPopUpMenuModel *popupModel; // ivar: _popupModel
@property (readonly, nonatomic) BOOL startWithFirstItem; // ivar: _startWithFirstItem


+(id)cellSpecFromTSKFormat:(id)arg0 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)popupCellSpec:(id)arg0 startWithFirstItem:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateFormatAndValue:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indexForValue:(id)arg0 ;
-(id)asChooserControlSpec;
-(id)displayStringAtIndex:(NSUInteger)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithPopupModel:(id)arg0 startWithFirstItem:(BOOL)arg1 ;
-(id)tskMultipleChoiceListFormat;
-(id)valueForIndex:(NSUInteger)arg0 ;
-(unsigned int)interactionType;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif