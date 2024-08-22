// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOEDITPERSISTENCEMANAGER_H
#define PLPHOTOEDITPERSISTENCEMANAGER_H


#import <Foundation/Foundation.h>


@interface PLPhotoEditPersistenceManager : NSObject



+(BOOL)validateAdjustmentData:(id)arg0 formatIdentifier:(id)arg1 formatVersion:(id)arg2 error:(*id)arg3 ;
+(unsigned int)renderTypeForAdjustmentData:(id)arg0 formatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
-(id)dataFromCompositionController:(id)arg0 outFormatIdentifier:(*id)arg1 outFormatVersion:(*id)arg2 exportProperties:(id)arg3 ;
-(id)debugDescriptionForAdjustmentData:(id)arg0 ;
-(id)debugDescriptionForPhotoEditData:(id)arg0 formatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
-(id)loadCompositionFrom:(id)arg0 formatIdentifier:(id)arg1 formatVersion:(id)arg2 error:(*id)arg3 ;
-(id)loadPhotoEditData:(id)arg0 formatIdentifier:(id)arg1 formatVersion:(id)arg2 importProperties:(id)arg3 error:(*id)arg4 ;
-(void)loadMasterDimensionsFromPhotoEditData:(id)arg0 outMasterWidth:(*NSInteger)arg1 outMasterHeight:(*NSInteger)arg2 ;


@end


#endif