// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSEDURABLEFEATURESTOREFEATUREVALUEHISTOGRAM_H
#define BMMLSEDURABLEFEATURESTOREFEATUREVALUEHISTOGRAM_H

@class BMEventBase, NSArray, NSString;
@protocol BMStoreData;



@interface BMMLSEDurableFeatureStoreFeatureValueHistogram : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSArray *bucketList; // ivar: _bucketList
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBucketList:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif