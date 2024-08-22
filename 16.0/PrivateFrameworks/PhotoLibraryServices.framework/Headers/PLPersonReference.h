// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPERSONREFERENCE_H
#define PLPERSONREFERENCE_H

@class NSData, NSString;


#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"
#import "PLPerson.h"

@interface PLPersonReference : PLManagedObject

@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) NSData *personData;
@property (retain, nonatomic) NSString *personUUID;


+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 personUUID:(id)arg1 personData:(id)arg2 ;


@end


#endif