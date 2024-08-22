// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMINTELLIGENCEPLATFORMFEATURESTORE_H
#define BMINTELLIGENCEPLATFORMFEATURESTORE_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMIntelligencePlatformFeatureStoreFeatureVector.h"

@interface BMIntelligencePlatformFeatureStore : BMEventBase <BMStoreData>



@property (readonly, nonatomic) int category; // ivar: _category
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMIntelligencePlatformFeatureStoreFeatureVector *featureVector; // ivar: _featureVector
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *labelName; // ivar: _labelName
@property (readonly, nonatomic) NSString *labelValue; // ivar: _labelValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *taskName; // ivar: _taskName


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithLabelName:(id)arg0 labelValue:(id)arg1 taskName:(id)arg2 category:(int)arg3 featureVector:(id)arg4 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif