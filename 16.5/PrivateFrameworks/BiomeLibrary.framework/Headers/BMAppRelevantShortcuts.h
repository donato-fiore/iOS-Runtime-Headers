// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMAPPRELEVANTSHORTCUTS_H
#define BMAPPRELEVANTSHORTCUTS_H

@class BMEventBase, NSString, NSData;
@protocol BMStoreData;



@interface BMAppRelevantShortcuts : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *keyImageProxyIdentifier; // ivar: _keyImageProxyIdentifier
@property (readonly, nonatomic) NSData *serializedRelevantShortcut; // ivar: _serializedRelevantShortcut
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 keyImageProxyIdentifier:(id)arg1 serializedRelevantShortcut:(id)arg2 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif