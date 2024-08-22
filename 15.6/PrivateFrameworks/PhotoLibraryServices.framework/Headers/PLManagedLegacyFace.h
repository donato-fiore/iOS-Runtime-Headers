// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMANAGEDLEGACYFACE_H
#define PLMANAGEDLEGACYFACE_H

@class NSString, NSValue;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"

@interface PLManagedLegacyFace : PLManagedObject

@property (retain, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) short identifier;
@property (nonatomic) CGRect relativeRect;
@property (retain, nonatomic) NSValue *relativeRectValue;


+(id)entityName;
-(void)delete;


@end


#endif