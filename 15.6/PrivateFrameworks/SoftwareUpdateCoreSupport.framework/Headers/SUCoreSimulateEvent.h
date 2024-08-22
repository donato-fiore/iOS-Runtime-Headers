// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORESIMULATEEVENT_H
#define SUCORESIMULATEEVENT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreSimulateEvent : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSString *alteration; // ivar: _alteration
@property (readonly, retain, nonatomic) NSString *assetAttributesPlist; // ivar: _assetAttributesPlist
@property (readonly, retain, nonatomic) NSArray *assetBuildVersions; // ivar: _assetBuildVersions
@property (readonly, retain, nonatomic) NSArray *assetProductVersions; // ivar: _assetProductVersions
@property (readonly, retain, nonatomic) NSString *assetState; // ivar: _assetState
@property (nonatomic) int count; // ivar: _count
@property (readonly, nonatomic) int duration; // ivar: _duration
@property (readonly, nonatomic) int endAt; // ivar: _endAt
@property (readonly, nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly, retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) NSInteger errorRecoverable; // ivar: _errorRecoverable
@property (readonly, retain, nonatomic) NSString *fsmEvent; // ivar: _fsmEvent
@property (readonly, retain, nonatomic) NSString *fsmState; // ivar: _fsmState
@property (readonly, retain, nonatomic) NSString *identityName; // ivar: _identityName
@property (readonly, retain, nonatomic) NSString *moduleName; // ivar: _moduleName
@property (readonly, nonatomic) NSInteger simAction; // ivar: _simAction
@property (readonly, nonatomic) NSInteger simTrigger; // ivar: _simTrigger
@property (readonly, nonatomic) int startAt; // ivar: _startAt
@property (readonly, retain, nonatomic) NSString *untilStop; // ivar: _untilStop
@property (readonly, retain, nonatomic) NSString *updateInfoPlist; // ivar: _updateInfoPlist


+(BOOL)supportsSecureCoding;
+(id)nameForSimulateEventBoolean:(NSInteger)arg0 ;
-(id)_actionName;
-(id)_descriptionFSM;
-(id)_descriptionStandard;
-(id)_initWithAction:(NSInteger)arg0 onTrigger:(NSInteger)arg1 forModule:(id)arg2 atIdentity:(id)arg3 atEvent:(id)arg4 inState:(id)arg5 alteration:(id)arg6 startAt:(int)arg7 endAt:(int)arg8 duration:(int)arg9 untilStop:(id)arg10 assetBuildVersions:(id)arg11 assetProductVersions:(id)arg12 assetAttributesPlist:(id)arg13 assetState:(id)arg14 updateInfoPlist:(id)arg15 errorDomain:(id)arg16 errorCode:(NSInteger)arg17 errorRecoverable:(NSInteger)arg18 ;
-(id)_triggerName;
-(id)buildErrorWithDescription:(id)arg0 ;
-(id)description;
-(id)initWithAction:(NSInteger)arg0 onTrigger:(NSInteger)arg1 forMachine:(id)arg2 atEvent:(id)arg3 inState:(id)arg4 alteration:(id)arg5 startAt:(int)arg6 endAt:(int)arg7 assetBuildVersions:(id)arg8 assetProductVersions:(id)arg9 assetAttributesPlist:(id)arg10 assetState:(id)arg11 updateInfoPlist:(id)arg12 errorDomain:(id)arg13 errorCode:(NSInteger)arg14 errorRecoverable:(NSInteger)arg15 ;
-(id)initWithAction:(NSInteger)arg0 onTrigger:(NSInteger)arg1 forModule:(id)arg2 atFunction:(id)arg3 startAt:(int)arg4 endAt:(int)arg5 duration:(int)arg6 untilStop:(id)arg7 assetBuildVersions:(id)arg8 assetProductVersions:(id)arg9 assetAttributesPlist:(id)arg10 assetState:(id)arg11 updateInfoPlist:(id)arg12 errorDomain:(id)arg13 errorCode:(NSInteger)arg14 errorRecoverable:(NSInteger)arg15 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif