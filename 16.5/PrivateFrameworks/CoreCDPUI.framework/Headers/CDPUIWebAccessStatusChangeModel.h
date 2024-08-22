// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIWEBACCESSSTATUSCHANGEMODEL_H
#define CDPUIWEBACCESSSTATUSCHANGEMODEL_H

@class NSString;
@protocol CDPUIStatusChangeModel, CDPWebAccessStatusProvider, CDPWebAccessStatusUpdater, CDPWalrusStatusProvider;

#import <Foundation/Foundation.h>


@interface CDPUIWebAccessStatusChangeModel : NSObject <CDPUIStatusChangeModel>

 {
    id<CDPWebAccessStatusProvider> *_webAccessStatusProvider;
    id<CDPWebAccessStatusUpdater> *_webAccessStatusUpdater;
    id<CDPWalrusStatusProvider> *_walrusStatusProvider;
}


@property (readonly, nonatomic) NSString *cancelButtonText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *messageText;
@property (readonly, nonatomic) NSString *primaryButtonText;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger targetStatus; // ivar: _targetStatus
@property (readonly, nonatomic) NSString *titleText;


-(id)initWithTargetStatus:(NSUInteger)arg0 statusProvider:(id)arg1 statusUpdater:(id)arg2 walrusStatusProvider:(id)arg3 ;
-(void)_checkCurrentStatus:(id)arg0 ;
-(void)_updateUnderlyingValue:(id)arg0 ;


@end


#endif