// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIRIPOSTSIRIENGAGEMENTSIGNALCONTENT_H
#define BMSIRIPOSTSIRIENGAGEMENTSIGNALCONTENT_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriPostSiriEngagementSignalContent : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif