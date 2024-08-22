// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPPRODUCTIMAGEASSETS_H
#define PKPAYMENTSETUPPRODUCTIMAGEASSETS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying>



@property (nonatomic) *CGImage digitalCardImage; // ivar: _digitalCardImage
@property (nonatomic) *CGImage logoImage; // ivar: _logoImage
@property (nonatomic) *CGImage plasticCardImage; // ivar: _plasticCardImage
@property (nonatomic) *CGImage thumbnailImage; // ivar: _thumbnailImage


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif