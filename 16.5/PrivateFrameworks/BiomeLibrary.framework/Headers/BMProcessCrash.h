// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPROCESSCRASH_H
#define BMPROCESSCRASH_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMProcessCrashException.h"
#import "BMProcessCrashTerminationReason.h"

@interface BMProcessCrash : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) NSString *coalitionName; // ivar: _coalitionName
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMProcessCrashException *exception; // ivar: _exception
@property (nonatomic) BOOL hasIsBeta; // ivar: _hasIsBeta
@property (nonatomic) BOOL hasIsFirstParty; // ivar: _hasIsFirstParty
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *incidentID; // ivar: _incidentID
@property (readonly, nonatomic) BOOL isBeta; // ivar: _isBeta
@property (readonly, nonatomic) BOOL isFirstParty; // ivar: _isFirstParty
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) NSString *responsibleApp; // ivar: _responsibleApp
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMProcessCrashTerminationReason *terminationReason; // ivar: _terminationReason


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIncidentID:(id)arg0 processName:(id)arg1 bundleID:(id)arg2 appVersion:(id)arg3 bundleVersion:(id)arg4 exception:(id)arg5 terminationReason:(id)arg6 responsibleApp:(id)arg7 ;
-(id)initWithIncidentID:(id)arg0 processName:(id)arg1 bundleID:(id)arg2 appVersion:(id)arg3 bundleVersion:(id)arg4 exception:(id)arg5 terminationReason:(id)arg6 responsibleApp:(id)arg7 coalitionName:(id)arg8 ;
-(id)initWithIncidentID:(id)arg0 processName:(id)arg1 bundleID:(id)arg2 appVersion:(id)arg3 bundleVersion:(id)arg4 exception:(id)arg5 terminationReason:(id)arg6 responsibleApp:(id)arg7 coalitionName:(id)arg8 isFirstParty:(id)arg9 isBeta:(id)arg10 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif