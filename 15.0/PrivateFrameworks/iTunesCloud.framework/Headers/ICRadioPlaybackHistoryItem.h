// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRADIOPLAYBACKHISTORYITEM_H
#define ICRADIOPLAYBACKHISTORYITEM_H

@class NSDictionary, NSDate, NSNumber, NSMutableDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSDictionary *_serverTrackInfo;
}


@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSNumber *pauseTime; // ivar: _pauseTime
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *serverTrackInfo;
@property (readonly, copy, nonatomic) NSDate *skipDate; // ivar: _skipDate
@property (readonly, nonatomic) NSInteger storeIdentifier; // ivar: _storeIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrack:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif