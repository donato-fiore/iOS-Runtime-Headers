// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTIMEINTERVAL_H
#define WFTIMEINTERVAL_H

@class NSString, NSDateComponentsFormatter;
@protocol NSCopying, WFSerializableContent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFTimeInterval : NSObject <NSCopying, WFSerializableContent, NSSecureCoding>



@property (readonly, nonatomic) NSString *absoluteTimeString;
@property (readonly, nonatomic) NSUInteger allowedUnits; // ivar: _allowedUnits
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash; // ivar: _hash
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval
@property (readonly, nonatomic) NSDateComponentsFormatter *timeIntervalFormatter; // ivar: _timeIntervalFormatter
@property (readonly, nonatomic) NSInteger unitsStyle; // ivar: _unitsStyle
@property (readonly, nonatomic) NSUInteger zeroFormattingBehavior; // ivar: _zeroFormattingBehavior


+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeInterval:(CGFloat)arg0 ;
-(id)initWithTimeInterval:(CGFloat)arg0 allowedUnits:(NSUInteger)arg1 unitsStyle:(NSInteger)arg2 zeroFormattingBehavior:(NSUInteger)arg3 ;
-(id)wfName;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif