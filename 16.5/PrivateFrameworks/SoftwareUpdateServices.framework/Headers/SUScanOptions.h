// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCANOPTIONS_H
#define SUSCANOPTIONS_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying;


#import "SUOptionsBase.h"

@interface SUScanOptions : SUOptionsBase <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL MDMShowRapidSecurityResponse; // ivar: _MDMShowRapidSecurityResponse
@property (nonatomic) BOOL MDMUseDelayPeriod; // ivar: _MDMUseDelayPeriod
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic, getter=isForced) BOOL forced; // ivar: _forced
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL ignoreNoUpdateFoundResult; // ivar: _ignoreNoUpdateFoundResult
@property (retain, nonatomic) NSString *requestedPMV; // ivar: _requestedPMV
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (retain, nonatomic) NSSet *types; // ivar: _types


+(BOOL)supportsSecureCoding;
-(BOOL)containsType:(int)arg0 ;
-(BOOL)findsAnyUpdate;
-(BOOL)isSplatOnlyScan;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addType:(int)arg0 ;
-(void)clearTypes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeType:(int)arg0 ;


@end


#endif