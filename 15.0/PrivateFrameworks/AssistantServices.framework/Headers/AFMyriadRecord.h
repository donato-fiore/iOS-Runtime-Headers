// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFMYRIADRECORD_H
#define AFMYRIADRECORD_H

@class NSData, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AFMyriadRecord : NSObject <NSCopying>



@property (copy, nonatomic) NSData *advertisementData; // ivar: _advertisementData
@property (nonatomic) BOOL advertisementDataIsDirty; // ivar: _advertisementDataIsDirty
@property (nonatomic) unsigned char bump; // ivar: _bump
@property (nonatomic) unsigned char deviceClass; // ivar: _deviceClass
@property (nonatomic) unsigned char deviceGroup; // ivar: _deviceGroup
@property (copy, nonatomic) NSUUID *deviceID; // ivar: _deviceID
@property (nonatomic) unsigned char goodness; // ivar: _goodness
@property (nonatomic) unsigned char isCollectedFromContextCollector; // ivar: _isCollectedFromContextCollector
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (nonatomic) unsigned short pHash; // ivar: _pHash
@property (nonatomic) unsigned char productType; // ivar: _productType
@property (nonatomic) unsigned char rawAudioGoodnessScore; // ivar: _rawAudioGoodnessScore
@property (nonatomic) unsigned char tieBreaker; // ivar: _tieBreaker
@property (nonatomic) unsigned char userConfidence; // ivar: _userConfidence


-(BOOL)hasEqualAdvertismentData:(id)arg0 ;
-(BOOL)isAContinuation;
-(BOOL)isALateSupressionTrumpFor:(id)arg0 ;
-(BOOL)isATrump;
-(BOOL)isAnEmergency;
-(BOOL)isAnEmergencyHandled;
-(BOOL)isCarplayTrump;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInEarTrump;
-(BOOL)isSane;
-(BOOL)isSlowdown;
-(NSUInteger)hash;
-(id)asAdvertisementData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAudioData:(id)arg0 ;
-(id)initWithDeviceID:(id)arg0 data:(id)arg1 ;
-(int)slowdownDelay;
-(void)adjustByMultiplier:(float)arg0 adding:(int)arg1 ;
-(void)generateRandomConfidence;
-(void)generateTiebreaker;


@end


#endif