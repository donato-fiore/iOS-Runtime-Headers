// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSMODELFACEMODEL_H
#define VNPERSONSMODELFACEMODEL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding>





+(BOOL)getStoredRepresentationTag:(*unsigned int)arg0 forModelVersion:(NSUInteger)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)modelBuiltFromConfiguration:(id)arg0 dataProvider:(id)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(BOOL)isCompatibleWithConfiguration:(id)arg0 ;
-(NSUInteger)faceCountForPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)faceprintRequestRevision;
-(NSUInteger)personCount;
-(id)faceCountsForAllPersons;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)personPredictionsForFace:(id)arg0 withDescriptor:(*void)arg1 limit:(NSUInteger)arg2 canceller:(id)arg3 error:(*id)arg4 ;
-(id)personUniqueIdentifiers;
-(id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif