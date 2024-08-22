// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMLIGHTHOUSELEDGERTRIALIDENTIFIERSBMLTIDENTIFIERS_H
#define BMLIGHTHOUSELEDGERTRIALIDENTIFIERSBMLTIDENTIFIERS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMLighthouseLedgerTrialIdentifiersBMLTIdentifiers : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *trialDeploymentID; // ivar: _trialDeploymentID
@property (readonly, nonatomic) NSString *trialTaskID; // ivar: _trialTaskID


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithTrialTaskID:(id)arg0 trialDeploymentID:(id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif