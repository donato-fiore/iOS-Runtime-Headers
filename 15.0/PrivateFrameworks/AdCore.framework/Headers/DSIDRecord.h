// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSIDRECORD_H
#define DSIDRECORD_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DSIDRecord : NSObject <NSCopying>

 {
    BOOL _dirty;
    int _nextReconcileTimestamp;
}


@property (retain) NSMutableDictionary *ADIDRecords; // ivar: _ADIDRecords
@property (retain, nonatomic) NSString *DSID; // ivar: _DSID
@property (nonatomic) BOOL accountAgeUnknown; // ivar: _accountAgeUnknown
@property (nonatomic) BOOL accountIsT13; // ivar: _accountIsT13
@property (nonatomic) BOOL accountIsU13; // ivar: _accountIsU13
@property (nonatomic) BOOL accountIsU18; // ivar: _accountIsU18
@property (nonatomic) BOOL dirty;
@property (retain, nonatomic) NSString *iAdIDBeforeReset; // ivar: _iAdIDBeforeReset
@property (retain, nonatomic) NSString *iCloudDSID; // ivar: _iCloudDSID
@property (readonly, nonatomic) BOOL isActiveRecord; // ivar: _isActiveRecord
@property (nonatomic) BOOL isDPIDManatee; // ivar: _isDPIDManatee
@property (nonatomic) BOOL isPlaceholderAccount; // ivar: _isPlaceholderAccount
@property (readonly, nonatomic) BOOL isRestrictedByApple;
@property (readonly, nonatomic) BOOL isRestrictedByEU_GDPR; // ivar: _isRestrictedByEU_GDPR
@property (nonatomic) NSInteger lastJingleAccountStatus; // ivar: _lastJingleAccountStatus
@property (nonatomic) int lastSegmentServedTimestamp; // ivar: _lastSegmentServedTimestamp
@property (nonatomic) BOOL lastSentPersonalizedAdsStatus; // ivar: _lastSentPersonalizedAdsStatus
@property (nonatomic) int lastSentPersonalizedAdsTimestamp; // ivar: _lastSentPersonalizedAdsTimestamp
@property (nonatomic) int lastSentSegmentDataTimestamp; // ivar: _lastSentSegmentDataTimestamp
@property (nonatomic) int nextReconcileTimestamp;
@property (nonatomic) BOOL notificationRequired; // ivar: _notificationRequired
@property (nonatomic) int personalizedAdsTimestamp; // ivar: _personalizedAdsTimestamp
@property (retain, nonatomic) NSString *segmentData; // ivar: _segmentData
@property (nonatomic) int segmentDataTimestamp; // ivar: _segmentDataTimestamp


-(BOOL)iAdIDRecordsDirty;
-(BOOL)shouldSendNotification;
-(id)_parseItunesFlags;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)encryptedIDForClientType:(NSInteger)arg0 ;
-(id)idAccountsDictionaryRepresentation;
-(id)idForClientType:(NSInteger)arg0 ;
-(id)initWithDSID:(id)arg0 serializedRecord:(id)arg1 version:(int)arg2 ;
-(void)setID:(id)arg0 forClientType:(NSInteger)arg1 ;


@end


#endif