// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLIGHTHOUSELEDGERMLRUNTIMEDEVENTSCHEDULESTATUS_H
#define BMLIGHTHOUSELEDGERMLRUNTIMEDEVENTSCHEDULESTATUS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMLighthouseLedgerMlruntimedEventScheduleStatus : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasScheduled; // ivar: _hasScheduled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL scheduled; // ivar: _scheduled
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithScheduled:(id)arg0 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif