// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMOMENTSENGAGEMENTPHOTOSASSETS_H
#define BMMOMENTSENGAGEMENTPHOTOSASSETS_H

@class BMEventBase, NSArray, NSString;
@protocol BMStoreData;



@interface BMMomentsEngagementPhotosAssets : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSArray *assetUUIDs; // ivar: _assetUUIDs
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithSourceName:(id)arg0 sourceIdentifier:(id)arg1 assetUUIDs:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif