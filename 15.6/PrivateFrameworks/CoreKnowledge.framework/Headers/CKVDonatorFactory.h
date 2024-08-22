// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVDONATORFACTORY_H
#define CKVDONATORFACTORY_H

@protocol CKVDonatorProvider, KVDonateServiceProvider;

#import <Foundation/Foundation.h>


@interface CKVDonatorFactory : NSObject <CKVDonatorProvider>

 {
    NSObject<KVDonateServiceProvider> *_serviceProvider;
}




-(id)donatorWithItemType:(NSInteger)arg0 originAppId:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithServiceProvider:(id)arg0 ;


@end


#endif