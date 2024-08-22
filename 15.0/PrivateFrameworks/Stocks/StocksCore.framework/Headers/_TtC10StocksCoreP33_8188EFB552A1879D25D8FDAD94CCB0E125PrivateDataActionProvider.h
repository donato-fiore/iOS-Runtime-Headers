// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10STOCKSCOREP33_8188EFB552A1879D25D8FDAD94CCB0E125PRIVATEDATAACTIONPROVIDER_H
#define _TTC10STOCKSCOREP33_8188EFB552A1879D25D8FDAD94CCB0E125PRIVATEDATAACTIONPROVIDER_H

@protocol FCNonDestructivePrivateDataActionProvider;

#import <Foundation/Foundation.h>


@interface _TtC10StocksCoreP33_8188EFB552A1879D25D8FDAD94CCB0E125PrivateDataActionProvider : NSObject <FCNonDestructivePrivateDataActionProvider>





-(id)init;
-(void)consumeNonDestructiveActionsSyncWithBlock:(id)arg0 ;


@end


#endif