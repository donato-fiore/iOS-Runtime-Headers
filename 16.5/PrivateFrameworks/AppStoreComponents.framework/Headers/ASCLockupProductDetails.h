// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLOCKUPPRODUCTDETAILS_H
#define ASCLOCKUPPRODUCTDETAILS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "ASCLockup.h"

@interface ASCLockupProductDetails : NSObject

@property (readonly, copy, nonatomic) ASCLockup *lockup; // ivar: _lockup
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NSString *storeSheetHostBundleID; // ivar: _storeSheetHostBundleID
@property (readonly, copy, nonatomic) NSString *storeSheetUsageContext; // ivar: _storeSheetUsageContext


+(id)URLForLockupID:(id)arg0 ofKind:(id)arg1 offerFlags:(NSInteger)arg2 queryParameters:(id)arg3 ;
+(id)URLForLockupID:(id)arg0 ofKind:(id)arg1 withOfferFlags:(NSInteger)arg2 ;
+(id)queryParametersForLockup:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithLockup:(id)arg0 ;
-(id)initWithLockup:(id)arg0 storeSheetHostBundleID:(id)arg1 storeSheetUsageContext:(id)arg2 ;
-(id)initWithLockup:(id)arg0 storeSheetHostBundleID:(id)arg1 storeSheetUsageContext:(id)arg2 parameters:(id)arg3 ;
-(void)present:(id)arg0 ;
-(void)presentFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif