// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTTABLEBOOKINGSESSION_H
#define GEOLOGMSGEVENTTABLEBOOKINGSESSION_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventTableBookingSession : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSInteger _blurredBookingTimestamp;
    NSInteger _blurredReservationTimestamp;
    NSString *_bookTableAppId;
    NSString *_bookTableSessionId;
    CGFloat _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSString *_installNeededTappedAppId;
    NSUInteger _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _endState;
    int _endView;
    unsigned int _tableSize;
    BOOL _addedSpecialRequest;
    BOOL _installCompleted;
    BOOL _installNeeded;
    BOOL _swipedAvailableTimes;
    BOOL _tappedDatePicker;
    ? _flags;
}


@property (nonatomic) BOOL addedSpecialRequest;
@property (nonatomic) NSInteger blurredBookingTimestamp;
@property (nonatomic) NSInteger blurredReservationTimestamp;
@property (retain, nonatomic) NSString *bookTableAppId;
@property (retain, nonatomic) NSString *bookTableSessionId;
@property (nonatomic) CGFloat durationOfSessionInSeconds;
@property (nonatomic) int endState;
@property (nonatomic) int endView;
@property (retain, nonatomic) NSMutableArray *errorMessages;
@property (nonatomic) BOOL hasAddedSpecialRequest;
@property (nonatomic) BOOL hasBlurredBookingTimestamp;
@property (nonatomic) BOOL hasBlurredReservationTimestamp;
@property (readonly, nonatomic) BOOL hasBookTableAppId;
@property (readonly, nonatomic) BOOL hasBookTableSessionId;
@property (nonatomic) BOOL hasDurationOfSessionInSeconds;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) BOOL hasEndView;
@property (nonatomic) BOOL hasInstallCompleted;
@property (nonatomic) BOOL hasInstallNeeded;
@property (readonly, nonatomic) BOOL hasInstallNeededTappedAppId;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasSwipedAvailableTimes;
@property (nonatomic) BOOL hasTableSize;
@property (nonatomic) BOOL hasTappedDatePicker;
@property (nonatomic) BOOL installCompleted;
@property (nonatomic) BOOL installNeeded;
@property (retain, nonatomic) NSString *installNeededTappedAppId;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) BOOL swipedAvailableTimes;
@property (nonatomic) unsigned int tableSize;
@property (nonatomic) BOOL tappedDatePicker;


+(BOOL)isValid:(id)arg0 ;
+(Class)errorMessageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endStateAsString:(int)arg0 ;
-(id)endViewAsString:(int)arg0 ;
-(id)errorMessageAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsEndState:(id)arg0 ;
-(int)StringAsEndView:(id)arg0 ;
-(void)addErrorMessage:(id)arg0 ;
-(void)clearErrorMessages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif