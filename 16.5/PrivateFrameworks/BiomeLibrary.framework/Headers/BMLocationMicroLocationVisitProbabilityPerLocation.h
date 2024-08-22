// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLOCATIONMICROLOCATIONVISITPROBABILITYPERLOCATION_H
#define BMLOCATIONMICROLOCATIONVISITPROBABILITYPERLOCATION_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMLocationMicroLocationVisitProbabilityPerLocation : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasProbability; // ivar: _hasProbability
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *microLocationIdentifier; // ivar: _microLocationIdentifier
@property (readonly, nonatomic) CGFloat probability; // ivar: _probability
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithMicroLocationIdentifier:(id)arg0 probability:(id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif