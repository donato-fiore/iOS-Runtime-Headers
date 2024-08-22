// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFAMILYFEATUREEXTRACTOR_H
#define _PSFAMILYFEATUREEXTRACTOR_H

@class NSSet, _CDCloudFamilyDataCollectionTask;

#import <Foundation/Foundation.h>


@interface _PSFamilyFeatureExtractor : NSObject

@property (readonly, nonatomic) NSSet *featureSet; // ivar: _featureSet
@property (readonly, nonatomic) _CDCloudFamilyDataCollectionTask *task; // ivar: _task


-(id)featureInputForContact:(id)arg0 ;
-(id)featureInputsForContacts:(id)arg0 ;
-(id)init;
-(id)initWith:(id)arg0 featureSet:(id)arg1 ;
-(id)initWithActivity:(id)arg0 ;


@end


#endif