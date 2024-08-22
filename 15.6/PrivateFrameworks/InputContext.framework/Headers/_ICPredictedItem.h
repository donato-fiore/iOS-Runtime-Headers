// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICPREDICTEDITEM_H
#define _ICPREDICTEDITEM_H

@class NSDate, NSString, NSDictionary, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_ICProactiveTrigger.h"

@interface _ICPredictedItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) unsigned char flags; // ivar: _flags
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) unsigned char itemType; // ivar: _itemType
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned char layoutHint; // ivar: _layoutHint
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *operationData; // ivar: _operationData
@property (readonly, nonatomic) NSString *originatingBundleID; // ivar: _originatingBundleID
@property (readonly, nonatomic) NSURL *originatingWebsiteURL; // ivar: _originatingWebsiteURL
@property (nonatomic) NSUInteger predictionAge; // ivar: _predictionAge
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) BOOL shouldAggregate; // ivar: _shouldAggregate
@property (readonly, nonatomic) NSString *targetBundleID; // ivar: _targetBundleID
@property (readonly, nonatomic) _ICProactiveTrigger *trigger; // ivar: _trigger
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)predictedItemFromQuickTypeItem:(id)arg0 trigger:(id)arg1 ;
-(BOOL)hasScoreSimilarToItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPredictedItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 itemType:(unsigned char)arg1 score:(CGFloat)arg2 value:(id)arg3 label:(id)arg4 name:(id)arg5 date:(id)arg6 originatingBundleID:(id)arg7 originatingWebsiteURL:(id)arg8 predictionAge:(NSUInteger)arg9 shouldAggregate:(BOOL)arg10 flags:(unsigned char)arg11 targetBundleID:(id)arg12 operationData:(id)arg13 proactiveTrigger:(id)arg14 ;
-(id)initWithIdentifier:(id)arg0 score:(CGFloat)arg1 value:(id)arg2 label:(id)arg3 name:(id)arg4 date:(id)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(NSUInteger)arg8 shouldAggregate:(BOOL)arg9 flags:(unsigned char)arg10 proactiveTrigger:(id)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif