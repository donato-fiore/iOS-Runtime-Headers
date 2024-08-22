// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSEVIRTUALFEATURESTORE_H
#define BMMLSEVIRTUALFEATURESTORE_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMMLSEVirtualFeatureStore : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSArray *featureVector; // ivar: _featureVector
@property (readonly, nonatomic) unsigned int featureVersion; // ivar: _featureVersion
@property (nonatomic) BOOL hasFeatureVersion; // ivar: _hasFeatureVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *shareSessionIdentifier; // ivar: _shareSessionIdentifier
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithItemIdentifier:(id)arg0 featureVersion:(id)arg1 featureVector:(id)arg2 ;
-(id)initWithItemIdentifier:(id)arg0 featureVersion:(id)arg1 featureVector:(id)arg2 deviceIdentifier:(id)arg3 ;
-(id)initWithItemIdentifier:(id)arg0 featureVersion:(id)arg1 featureVector:(id)arg2 deviceIdentifier:(id)arg3 shareSessionIdentifier:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif