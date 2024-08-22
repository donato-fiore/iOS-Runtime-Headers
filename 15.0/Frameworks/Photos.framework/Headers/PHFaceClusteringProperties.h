// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHFACECLUSTERINGPROPERTIES_H
#define PHFACECLUSTERINGPROPERTIES_H

@class NSString;


#import "PHFacePropertySet.h"
#import "PHFaceprint.h"

@interface PHFaceClusteringProperties : PHFacePropertySet

@property (readonly, nonatomic) PHFaceprint *faceprint; // ivar: _faceprint
@property (readonly, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 face:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif