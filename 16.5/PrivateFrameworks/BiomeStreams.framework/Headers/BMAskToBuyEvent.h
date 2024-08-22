// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMASKTOBUYEVENT_H
#define BMASKTOBUYEVENT_H

@class NSString, NSNumber;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMAskToBuyEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (copy, nonatomic) NSString *actionUserID; // ivar: _actionUserID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat eventTime; // ivar: _eventTime
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActionUserDevice; // ivar: _isActionUserDevice
@property (copy, nonatomic) NSString *itemAgeRating; // ivar: _itemAgeRating
@property (copy, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (copy, nonatomic) NSString *itemLocalizedPrice; // ivar: _itemLocalizedPrice
@property (copy, nonatomic) NSNumber *itemStarRating; // ivar: _itemStarRating
@property (copy, nonatomic) NSString *itemTitle; // ivar: _itemTitle
@property (copy, nonatomic) NSString *productType; // ivar: _productType
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) int status; // ivar: _status
@property (copy, nonatomic) NSString *storeLink; // ivar: _storeLink
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *thumbnailPath; // ivar: _thumbnailPath
@property (copy, nonatomic) NSString *userID; // ivar: _userID


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validNonOptionalProperty:(id)arg0 propertyName:(id)arg1 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithRequestID:(id)arg0 status:(int)arg1 eventTime:(CGFloat)arg2 userID:(id)arg3 actionUserID:(id)arg4 itemTitle:(id)arg5 itemDescription:(id)arg6 itemLocalizedPrice:(id)arg7 thumbnailPath:(id)arg8 ageRating:(id)arg9 starRating:(id)arg10 productType:(id)arg11 ;
-(id)initWithRequestID:(id)arg0 status:(int)arg1 eventTime:(CGFloat)arg2 userID:(id)arg3 actionUserID:(id)arg4 itemTitle:(id)arg5 itemDescription:(id)arg6 itemLocalizedPrice:(id)arg7 thumbnailPath:(id)arg8 ageRating:(id)arg9 starRating:(id)arg10 productType:(id)arg11 isActionUserDevice:(BOOL)arg12 storeLink:(id)arg13 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif