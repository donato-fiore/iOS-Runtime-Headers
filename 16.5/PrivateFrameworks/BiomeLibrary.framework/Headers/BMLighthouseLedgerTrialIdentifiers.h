// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLIGHTHOUSELEDGERTRIALIDENTIFIERS_H
#define BMLIGHTHOUSELEDGERTRIALIDENTIFIERS_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMLighthouseLedgerTrialIdentifiersBMLTIdentifiers.h"
#import "BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers.h"

@interface BMLighthouseLedgerTrialIdentifiers : BMEventBase <BMStoreData>



@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiersBMLTIdentifiers *bmltIdentifiers; // ivar: _bmltIdentifiers
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers *experimentIdentifiers; // ivar: _experimentIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithExperimentIdentifiers:(id)arg0 bmltIdentifiers:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif