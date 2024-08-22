// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCURLOFFER_H
#define ASCURLOFFER_H

@class NSNumber, NSString, NSArray, NSDictionary, NSURL;
@protocol ASCOffer, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASCAdamID.h"

@interface ASCURLOffer : NSObject <ASCOffer, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *ageRating; // ivar: _ageRating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ASCAdamID *id; // ivar: _id
@property (readonly, nonatomic) BOOL isSensitive; // ivar: _isSensitive
@property (readonly, nonatomic) NSArray *metrics; // ivar: _metrics
@property (readonly, copy, nonatomic) NSDictionary *subtitles; // ivar: _subtitles
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *titles; // ivar: _titles
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 titles:(id)arg1 subtitles:(id)arg2 flags:(NSInteger)arg3 ageRating:(id)arg4 metrics:(id)arg5 url:(id)arg6 isSensitive:(BOOL)arg7 ;
-(id)offerWithMetrics:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif