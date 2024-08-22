// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSCELLULARSDMADVICECHANGE_H
#define AWDSYMPTOMSCELLULARSDMADVICECHANGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDSymptomsCellularSDMAdviceChange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *adviceInitiatingNames; // ivar: _adviceInitiatingNames
@property (nonatomic) NSUInteger dlPriorThroughputBytesPerSec; // ivar: _dlPriorThroughputBytesPerSec
@property (nonatomic) NSUInteger dlSubsequentThroughputBytesPerSec; // ivar: _dlSubsequentThroughputBytesPerSec
@property (nonatomic) BOOL hasDlPriorThroughputBytesPerSec;
@property (nonatomic) BOOL hasDlSubsequentThroughputBytesPerSec;
@property (nonatomic) BOOL hasNewAdvice;
@property (nonatomic) BOOL hasNewAdviceAdditionalFlags;
@property (nonatomic) BOOL hasNewAdviceCause;
@property (nonatomic) BOOL hasNewScreenIsDark;
@property (nonatomic) BOOL hasNewScreenIsLocked;
@property (nonatomic) BOOL hasPreviousAdvice;
@property (nonatomic) BOOL hasPreviousAdviceCause;
@property (nonatomic) BOOL hasPreviousAdviceDuration;
@property (nonatomic) BOOL hasPreviousAdviceInitialCause;
@property (nonatomic) BOOL hasPreviousScreenIsDark;
@property (nonatomic) BOOL hasPreviousScreenIsLocked;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUlPriorThroughputBytesPerSec;
@property (nonatomic) BOOL hasUlSubsequentThroughputBytesPerSec;
@property (nonatomic) int newAdvice; // ivar: _newAdvice
@property (nonatomic) NSUInteger newAdviceAdditionalFlags; // ivar: _newAdviceAdditionalFlags
@property (nonatomic) int newAdviceCause; // ivar: _newAdviceCause
@property (nonatomic) BOOL newScreenIsDark; // ivar: _newScreenIsDark
@property (nonatomic) BOOL newScreenIsLocked; // ivar: _newScreenIsLocked
@property (retain, nonatomic) NSMutableArray *oldAdvicePartipants; // ivar: _oldAdvicePartipants
@property (nonatomic) int previousAdvice; // ivar: _previousAdvice
@property (nonatomic) int previousAdviceCause; // ivar: _previousAdviceCause
@property (nonatomic) NSUInteger previousAdviceDuration; // ivar: _previousAdviceDuration
@property (nonatomic) int previousAdviceInitialCause; // ivar: _previousAdviceInitialCause
@property (nonatomic) BOOL previousScreenIsDark; // ivar: _previousScreenIsDark
@property (nonatomic) BOOL previousScreenIsLocked; // ivar: _previousScreenIsLocked
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger ulPriorThroughputBytesPerSec; // ivar: _ulPriorThroughputBytesPerSec
@property (nonatomic) NSUInteger ulSubsequentThroughputBytesPerSec; // ivar: _ulSubsequentThroughputBytesPerSec


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)adviceInitiatingNamesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)newAdviceAsString:(int)arg0 ;
-(id)newAdviceCauseAsString:(int)arg0 ;
-(id)oldAdvicePartipantsAtIndex:(NSUInteger)arg0 ;
-(id)previousAdviceAsString:(int)arg0 ;
-(id)previousAdviceCauseAsString:(int)arg0 ;
-(id)previousAdviceInitialCauseAsString:(int)arg0 ;
-(int)StringAsNewAdvice:(id)arg0 ;
-(int)StringAsNewAdviceCause:(id)arg0 ;
-(int)StringAsPreviousAdvice:(id)arg0 ;
-(int)StringAsPreviousAdviceCause:(id)arg0 ;
-(int)StringAsPreviousAdviceInitialCause:(id)arg0 ;
-(void)addAdviceInitiatingNames:(id)arg0 ;
-(void)addOldAdvicePartipants:(id)arg0 ;
-(void)clearAdviceInitiatingNames;
-(void)clearOldAdvicePartipants;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif