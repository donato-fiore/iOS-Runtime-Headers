// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCALERTOFFER_H
#define ASCALERTOFFER_H

@class NSNumber, NSString, NSArray, NSDictionary;
@protocol ASCOffer, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASCAdamID.h"

@interface ASCAlertOffer : NSObject <ASCOffer, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *ageRating; // ivar: _ageRating
@property (readonly, copy, nonatomic) NSObject<ASCOffer> *alertButtonOffer; // ivar: _alertButtonOffer
@property (readonly, copy, nonatomic) NSString *alertButtonTitle; // ivar: _alertButtonTitle
@property (readonly, copy, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (readonly, copy, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ASCAdamID *id; // ivar: _id
@property (readonly, nonatomic) NSArray *metrics; // ivar: _metrics
@property (readonly, copy, nonatomic) NSDictionary *subtitles; // ivar: _subtitles
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *titles; // ivar: _titles


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 titles:(id)arg1 subtitles:(id)arg2 flags:(NSInteger)arg3 ageRating:(id)arg4 metrics:(id)arg5 alertTitle:(id)arg6 alertMessage:(id)arg7 alertButtonOffer:(id)arg8 alertButtonTitle:(id)arg9 ;
-(id)offerWithMetrics:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif