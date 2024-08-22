// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCLOCKUPFEATUREAD_H
#define ASCLOCKUPFEATUREAD_H

@class NSString;
@protocol ASCLockupFeature;

#import <Foundation/Foundation.h>

#import "ASCScreenshots.h"
#import "ASCTrailers.h"

@interface ASCLockupFeatureAd : NSObject <ASCLockupFeature>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *developerName; // ivar: _developerName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEditorsChoice; // ivar: _isEditorsChoice
@property (readonly, copy, nonatomic) NSString *productDescription; // ivar: _productDescription
@property (readonly, nonatomic) float productRating; // ivar: _productRating
@property (readonly, copy, nonatomic) NSString *productRatingBadge; // ivar: _productRatingBadge
@property (readonly, copy, nonatomic) ASCScreenshots *screenshots; // ivar: _screenshots
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) ASCTrailers *trailers; // ivar: _trailers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEditorsChoice:(BOOL)arg0 productRating:(float)arg1 productRatingBadge:(id)arg2 productDescription:(id)arg3 screenshots:(id)arg4 trailers:(id)arg5 developerName:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif