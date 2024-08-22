// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSCENEPRINT_H
#define PLSCENEPRINT_H

@class NSData;


#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"

@interface PLSceneprint : PLManagedObject

@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *duplicateMatchingAlternateData;
@property (retain, nonatomic) NSData *duplicateMatchingData;


+(id)entityName;
+(id)insertInCurrentManagedObjectContext:(id)arg0 withAdditionalAssetAttributes:(id)arg1 ;
-(void)willSave;


@end


#endif