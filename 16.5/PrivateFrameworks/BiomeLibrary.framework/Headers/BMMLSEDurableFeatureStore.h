// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSEDURABLEFEATURESTORE_H
#define BMMLSEDURABLEFEATURESTORE_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMMLSEDurableFeatureStoreFeatureValue.h"

@interface BMMLSEDurableFeatureStore : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int featureEntryType; // ivar: _featureEntryType
@property (readonly, nonatomic) int featureName; // ivar: _featureName
@property (readonly, nonatomic) BMMLSEDurableFeatureStoreFeatureValue *featureValue; // ivar: _featureValue
@property (readonly, nonatomic) unsigned int featureVersion; // ivar: _featureVersion
@property (nonatomic) BOOL hasFeatureVersion; // ivar: _hasFeatureVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithFeatureEntryType:(int)arg0 itemIdentifier:(id)arg1 featureName:(int)arg2 featureValue:(id)arg3 featureVersion:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif