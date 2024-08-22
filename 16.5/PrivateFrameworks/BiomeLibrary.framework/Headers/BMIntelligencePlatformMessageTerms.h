// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINTELLIGENCEPLATFORMMESSAGETERMS_H
#define BMINTELLIGENCEPLATFORMMESSAGETERMS_H

@class BMEventBase, NSString, NSArray, NSDate;
@protocol BMStoreData;



@interface BMIntelligencePlatformMessageTerms : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_timestamp;
    CGFloat _raw_timestamp;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasProtoVersion; // ivar: _hasProtoVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int protoVersion; // ivar: _protoVersion
@property (readonly, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSString *sender; // ivar: _sender
@property (readonly, nonatomic) NSString *spotlightIdentifier; // ivar: _spotlightIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *termCount; // ivar: _termCount
@property (readonly, nonatomic) NSDate *timestamp;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithProtoVersion:(id)arg0 bundleID:(id)arg1 domain:(id)arg2 spotlightIdentifier:(id)arg3 timestamp:(id)arg4 sender:(id)arg5 recipients:(id)arg6 termCount:(id)arg7 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif