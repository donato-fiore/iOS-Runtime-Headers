// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSCONFIGMETADATA_H
#define DRSCONFIGMETADATA_H

@class NSDate, NSString, DRConfig, NSUUID;

#import <Foundation/Foundation.h>


@interface DRSConfigMetadata : NSObject

@property (readonly, nonatomic) NSDate *appliedDate; // ivar: _appliedDate
@property (readonly, nonatomic) NSDate *completedDate; // ivar: _completedDate
@property (readonly, nonatomic) NSString *completionDescription; // ivar: _completionDescription
@property (readonly, nonatomic) NSUInteger completionType; // ivar: _completionType
@property (readonly, nonatomic) DRConfig *config; // ivar: _config
@property (readonly, nonatomic) NSUUID *configUUID; // ivar: _configUUID
@property (readonly, nonatomic) BOOL logTelemetry; // ivar: _logTelemetry
@property (readonly, nonatomic) NSDate *receivedDate; // ivar: _receivedDate
@property (readonly, nonatomic) BOOL reportToDecisionServer; // ivar: _reportToDecisionServer
@property (readonly, nonatomic) unsigned char state; // ivar: _state
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID


+(BOOL)_isValidState:(unsigned char)arg0 completionType:(NSUInteger)arg1 receivedDate:(id)arg2 appliedDate:(id)arg3 completedDate:(id)arg4 completionDescription:(id)arg5 ;
+(NSUInteger)_ON_CONTEXT_QUEUE_countForFilterPredicate:(id)arg0 context:(id)arg1 errorOut:(*id)arg2 ;
+(id)_ON_CONTEXT_QUEUE_configMetadataForFilterPredicate:(id)arg0 context:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(NSUInteger)arg3 errorOut:(*id)arg4 ;
+(id)_ON_CONTEXT_QUEUE_existingBackingMOWithConfigUUID:(id)arg0 context:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)_updateContextWithMORepresentation:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_ON_CONTEXT_QUEUE_initWithConfigMetadataMO:(id)arg0 ;
-(id)_ON_CONTEXT_QUEUE_moRepresentationInContext:(id)arg0 createIfMissing:(BOOL)arg1 errorOut:(*id)arg2 ;
-(id)_uuidPredicate;
-(id)initWithTeamID:(id)arg0 configUUID:(id)arg1 state:(unsigned char)arg2 completionType:(NSUInteger)arg3 receivedDate:(id)arg4 appliedDate:(id)arg5 completedDate:(id)arg6 completionDescription:(id)arg7 config:(id)arg8 logTelemetry:(BOOL)arg9 reportToDecisionServer:(BOOL)arg10 ;
-(id)jsonDictionaryRepresentation;


@end


#endif