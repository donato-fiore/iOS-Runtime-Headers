// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCZONEHEALTHSYNCPERSISTEDSTATE_H
#define BRCZONEHEALTHSYNCPERSISTEDSTATE_H

@class CKOperationGroup, NSDate, CKServerChangeToken;


#import "BRCPersistedState.h"

@interface BRCZoneHealthSyncPersistedState : BRCPersistedState

@property (retain, nonatomic) CKOperationGroup *ckGroup; // ivar: _ckGroup
@property (readonly) NSDate *lastSyncDownDate; // ivar: _lastSyncDownDate
@property (nonatomic) BOOL needsSyncDown; // ivar: _needsSyncDown
@property (readonly, nonatomic) NSUInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken


+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg0 options:(id)arg1 ;
-(NSUInteger)allocateNextRequestID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneHealthState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithServerChangeToken:(id)arg0 requestID:(NSUInteger)arg1 ;
-(void)zoneHealthWasReset;


@end


#endif