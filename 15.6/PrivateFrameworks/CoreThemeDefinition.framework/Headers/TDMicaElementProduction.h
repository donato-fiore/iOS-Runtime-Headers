// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDMICAELEMENTPRODUCTION_H
#define TDMICAELEMENTPRODUCTION_H

@protocol TDElementAttributes;


#import "TDElementProduction.h"
#import "TDMicaAsset.h"

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>



@property (retain, nonatomic) TDMicaAsset *asset;


-(BOOL)generateRenditionsWithEntityName:(id)arg0 document:(id)arg1 errorDescription:(*id)arg2 ;
-(id)associatedFileURLWithDocument:(id)arg0 ;
-(id)baseKeySpec;
-(id)copyDataFromAttributes;
-(id)dataFromAttributes;
-(id)relativePath;
-(void)copyAttributesInto:(id)arg0 ;
-(void)dealloc;
-(void)deleteRenditionsInDocument:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;
-(void)setAttributesFromCopyData:(id)arg0 ;
-(void)setAttributesFromData:(id)arg0 ;


@end


#endif