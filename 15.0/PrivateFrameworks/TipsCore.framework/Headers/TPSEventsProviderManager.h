// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSEVENTSPROVIDERMANAGER_H
#define TPSEVENTSPROVIDERMANAGER_H

@class NSString;
@protocol TPSEventsProviderDelegate, TPSDEventsProviderManagerDelegate;

#import <Foundation/Foundation.h>

#import "TPSDuetEventsProvider.h"
#import "TPSContentStatusEventsProvider.h"
#import "TPSBiomeEventsProvider.h"

@interface TPSEventsProviderManager : NSObject <TPSEventsProviderDelegate>

 {
    TPSDuetEventsProvider *_duetEventsProvider;
    TPSContentStatusEventsProvider *_contentStatusEventsProvider;
    TPSBiomeEventsProvider *_biomeEventsProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSDEventsProviderManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultManager;
-(NSInteger)_dataTypeForDataProvider:(id)arg0 ;
-(id)init;
-(void)dataProvider:(id)arg0 didFinishQueryWithResults:(id)arg1 ;
-(void)dataProvider:(id)arg0 didReceiveCallbackWithResult:(id)arg1 ;
-(void)queryEvents:(id)arg0 type:(NSInteger)arg1 ;
-(void)registerCallbackForEvents:(id)arg0 type:(NSInteger)arg1 ;
-(void)registerWakingCallbackForEvents:(id)arg0 type:(NSInteger)arg1 clientIdentifier:(id)arg2 ;


@end


#endif