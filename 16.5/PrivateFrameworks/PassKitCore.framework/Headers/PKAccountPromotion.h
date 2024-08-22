// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTPROMOTION_H
#define PKACCOUNTPROMOTION_H

@class NSArray, NSString, NSDate, NSDictionary, NSURL;
@protocol NSSecureCoding, NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>

#import "PKDynamicTemplateLayout.h"

@interface PKAccountPromotion : NSObject <NSSecureCoding, NSCopying, PKIdentifiable>

 {
    NSUInteger _state;
}


@property (retain, nonatomic) NSArray *completionSteps; // ivar: _completionSteps
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) NSInteger impressionCount; // ivar: _impressionCount
@property (readonly, nonatomic) BOOL isInTerminalState;
@property (retain, nonatomic) PKDynamicTemplateLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSDictionary *layoutDictionary; // ivar: _layoutDictionary
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *programIdentifier; // ivar: _programIdentifier
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *templateIdentifier; // ivar: _templateIdentifier
@property (retain, nonatomic) NSURL *termsURL; // ivar: _termsURL
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)_completed;
-(BOOL)_hasNonZeroProgress;
-(BOOL)_isOngoing;
-(BOOL)expiringSoon;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountPromotion:(id)arg0 ;
-(CGFloat)timeRemaining;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_initWithPromotionDictionary:(id)arg0 ;
-(void)_parseLayoutDictionary;
-(void)_updateState;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementImpressionCount;


@end


#endif