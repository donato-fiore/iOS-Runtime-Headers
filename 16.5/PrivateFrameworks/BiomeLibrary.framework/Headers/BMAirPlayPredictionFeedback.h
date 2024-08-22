// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMAIRPLAYPREDICTIONFEEDBACK_H
#define BMAIRPLAYPREDICTIONFEEDBACK_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMAirPlayPredictionFeedback : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *outputDeviceID; // ivar: _outputDeviceID
@property (readonly, nonatomic) NSString *subtype; // ivar: _subtype
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type; // ivar: _type


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(int)arg0 outputDeviceID:(id)arg1 subtype:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif