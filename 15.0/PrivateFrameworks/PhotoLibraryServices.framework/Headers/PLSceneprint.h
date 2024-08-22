// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSCENEPRINT_H
#define PLSCENEPRINT_H

@class NSData;


#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"

@interface PLSceneprint : PLManagedObject

@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;
@property (retain, nonatomic) NSData *data;


+(id)entityName;


@end


#endif