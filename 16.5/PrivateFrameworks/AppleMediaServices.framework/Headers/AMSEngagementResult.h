// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTRESULT_H
#define AMSENGAGEMENTRESULT_H

@class NSString, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSCarrierLinkResult.h"
#import "AMSPurchaseResult.h"

@interface AMSEngagementResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *ams_buyParams;
@property (retain, nonatomic) AMSCarrierLinkResult *carrierLinkResult; // ivar: _carrierLinkResult
@property (retain, nonatomic) NSData *modelData; // ivar: _modelData
@property (retain, nonatomic) AMSPurchaseResult *purchaseResult; // ivar: _purchaseResult
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)_updatedBodyFromValue:(id)arg0 request:(id)arg1 ;
-(NSInteger)expressCheckoutPath;
-(id)ams_requestActionFromRequest:(id)arg0 ;
-(id)expressCheckoutCardSelection;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithPath:(NSInteger)arg0 ;
-(id)initWithSelection:(id)arg0 ;
-(id)modelForClass:(Class)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif