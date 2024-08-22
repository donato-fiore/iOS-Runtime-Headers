// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDONATORFACTORY_H
#define CKVDONATORFACTORY_H

@protocol CKVDonatorProvider, KVDonateServiceProvider;

#import <Foundation/Foundation.h>


@interface CKVDonatorFactory : NSObject <CKVDonatorProvider>

 {
    NSObject<KVDonateServiceProvider> *_serviceProvider;
}




-(id)donatorWithItemType:(NSInteger)arg0 originAppId:(id)arg1 error:(*id)arg2 ;
-(id)donatorWithItemType:(NSInteger)arg0 originAppId:(id)arg1 userId:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithServiceProvider:(id)arg0 ;


@end


#endif