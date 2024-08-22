// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCCONTAINERMETADATASYNCPERSISTEDSTATE_H
#define BRCCONTAINERMETADATASYNCPERSISTEDSTATE_H

@class CKOperationGroup, NSDate, CKServerChangeToken;


#import "BRCPersistedState.h"

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState

@property (retain, nonatomic) CKOperationGroup *ckGroup; // ivar: _ckGroup
@property (nonatomic) BOOL hasCaughtUpAtLeastOnce; // ivar: _hasCaughtUpAtLeastOnce
@property (readonly, nonatomic) NSDate *lastSyncDownDate; // ivar: _lastSyncDownDate
@property (nonatomic) BOOL needsContainerMetadataSyncDown; // ivar: _needsContainerMetadataSyncDown
@property (nonatomic) BOOL needsSharedDBSyncDown; // ivar: _needsSharedDBSyncDown
@property (readonly, nonatomic) NSUInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken


+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg0 options:(id)arg1 ;
-(NSUInteger)allocateNextRequestID;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)containerMetadataWasReset;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithServerChangeToken:(id)arg0 requestID:(NSUInteger)arg1 ;


@end


#endif