// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDONATETASKFACTORY_H
#define CKVDONATETASKFACTORY_H

@class NSString;
@protocol CKVDonateTaskProvider, OS_dispatch_queue, CKVDonatorProvider;

#import <Foundation/Foundation.h>


@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVDonatorProvider> *_donatorProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property BOOL useSimulatedProviderBridge; // ivar: _useSimulatedProviderBridge


-(id)appInfoDonateTaskWithLanguageCode:(id)arg0 ;
-(id)contactsDonateTask;
-(id)homeKitDonateTask;
-(id)init;
-(id)initWithQueue:(id)arg0 serviceProvider:(id)arg1 ;
-(id)intentVocabularyDonateTask;
-(id)mediaDonateTask;
-(void)enableSimulatedTasks:(BOOL)arg0 ;


@end


#endif