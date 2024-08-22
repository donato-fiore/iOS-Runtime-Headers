// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUIUPDATEAGREEMENTMANAGER_H
#define SUSUIUPDATEAGREEMENTMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUSUIUpdateAgreementManager : NSObject {
    NSMutableDictionary *_updateAgreementDict;
    NSObject<OS_dispatch_queue> *_stateQueue;
}




-(id)_queue_agreementDictForDescriptor:(id)arg0 ;
-(id)init;
-(int)_queue_agreementDictValueForKey:(id)arg0 forDescriptor:(id)arg1 ;
-(int)cellularFeeAgreementStatusForUpdate:(id)arg0 ;
-(int)termsAgreementStatusForUpdate:(id)arg0 ;
-(void)_queue_setAgreementDictValue:(int)arg0 forKey:(id)arg1 forDescriptor:(id)arg2 ;
-(void)setCellularFeeAgreementStatus:(int)arg0 forUpdate:(id)arg1 ;
-(void)setTermsAgreementStatus:(int)arg0 forUpdate:(id)arg1 ;


@end


#endif