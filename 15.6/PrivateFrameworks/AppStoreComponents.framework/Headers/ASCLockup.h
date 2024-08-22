// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCLOCKUP_H
#define ASCLOCKUP_H

@class NSString, NSArray, NSSet;
@protocol NSSecureCoding, NSCopying, ASCViewModel, ASCOffer;

#import <Foundation/Foundation.h>

#import "ASCArtwork.h"
#import "ASCAdamID.h"
#import "ASCViewMetrics.h"
#import "ASCScreenshots.h"
#import "ASCTrailers.h"

@interface ASCLockup : NSObject <NSSecureCoding, NSCopying, ASCViewModel>



@property (readonly, copy, nonatomic) NSString *ageRating; // ivar: _ageRating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *developerName;
@property (readonly, copy, nonatomic) NSArray *features; // ivar: _features
@property (readonly, nonatomic) BOOL hasMedia;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *heading; // ivar: _heading
@property (readonly, copy, nonatomic) ASCArtwork *icon; // ivar: _icon
@property (readonly, copy, nonatomic) ASCAdamID *id; // ivar: _id
@property (readonly, nonatomic) BOOL isEditorsChoice;
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, copy, nonatomic) ASCViewMetrics *metrics; // ivar: _metrics
@property (readonly, copy, nonatomic) NSObject<ASCOffer> *offer; // ivar: _offer
@property (readonly, copy, nonatomic) NSString *productDescription;
@property (readonly, nonatomic) float productRating;
@property (readonly, copy, nonatomic) NSString *productRatingBadge;
@property (readonly, copy, nonatomic) NSString *productVariantID;
@property (readonly, copy, nonatomic) ASCScreenshots *screenshots;
@property (readonly, copy, nonatomic) NSSet *signpostTags;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) ASCTrailers *trailers;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)featureWithClass:(Class)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 kind:(id)arg1 icon:(id)arg2 heading:(id)arg3 title:(id)arg4 subtitle:(id)arg5 ageRating:(id)arg6 offer:(id)arg7 ;
-(id)initWithID:(id)arg0 kind:(id)arg1 metrics:(id)arg2 icon:(id)arg3 heading:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ageRating:(id)arg7 offer:(id)arg8 ;
-(id)initWithID:(id)arg0 kind:(id)arg1 metrics:(id)arg2 icon:(id)arg3 heading:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ageRating:(id)arg7 offer:(id)arg8 features:(id)arg9 ;
-(id)lockupByAddingFeature:(id)arg0 ;
-(id)lockupWithOffer:(id)arg0 ;
-(id)lockupWithSignpostTags:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif