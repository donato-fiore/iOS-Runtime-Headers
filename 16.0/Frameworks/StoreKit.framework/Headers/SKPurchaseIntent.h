// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPURCHASEINTENT_H
#define SKPURCHASEINTENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKPurchaseIntent : NSObject {
    NSString *_bundleId;
    NSString *_productIdentifer;
    NSString *_appName;
    NSString *_productName;
}




-(id)initWithBundleId:(id)arg0 productIdentifier:(id)arg1 ;
-(id)initWithBundleId:(id)arg0 productIdentifier:(id)arg1 appName:(id)arg2 productName:(id)arg3 ;
-(void)send:(id)arg0 ;


@end


#endif