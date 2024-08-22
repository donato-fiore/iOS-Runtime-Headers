// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISETTINGSFAMILYVIEWSTATECOORDINATOR_H
#define SKUISETTINGSFAMILYVIEWSTATECOORDINATOR_H


#import <Foundation/Foundation.h>


@interface SKUISettingsFamilyViewStateCoordinator : NSObject {
    id *_completionBlock;
}




-(void)_checkSubscriptionStatus:(id)arg0 isFinal:(BOOL)arg1 error:(id)arg2 ;
-(void)_getSubscriptionStatus;
-(void)_returnFamilyViewState:(NSInteger)arg0 ;
-(void)checkSettingsFamilyViewStateWithBlock:(id)arg0 ;


@end


#endif