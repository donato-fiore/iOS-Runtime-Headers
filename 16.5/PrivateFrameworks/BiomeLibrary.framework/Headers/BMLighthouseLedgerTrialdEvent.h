// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLIGHTHOUSELEDGERTRIALDEVENT_H
#define BMLIGHTHOUSELEDGERTRIALDEVENT_H

@class BMEventBase, NSString, NSDate;
@protocol BMStoreData;


#import "BMLighthouseLedgerTrialIdentifiers.h"

@interface BMLighthouseLedgerTrialdEvent : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_timestamp;
    CGFloat _raw_timestamp;
}


@property (readonly, nonatomic) NSString *contextID; // ivar: _contextID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL eventSucceeded; // ivar: _eventSucceeded
@property (readonly, nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) BOOL hasEventSucceeded; // ivar: _hasEventSucceeded
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers; // ivar: _trialIdentifiers


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTrialIdentifiers:(id)arg0 contextID:(id)arg1 timestamp:(id)arg2 eventType:(int)arg3 eventSucceeded:(id)arg4 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif