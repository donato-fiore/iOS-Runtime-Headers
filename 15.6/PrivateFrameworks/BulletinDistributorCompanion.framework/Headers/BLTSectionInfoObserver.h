// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTSECTIONINFOOBSERVER_H
#define BLTSECTIONINFOOBSERVER_H

@class BBObserver, BBSettingsGateway, NSString;
@protocol BBObserverDelegate, OS_dispatch_queue, BLTSectionInfoObserverDelegate;

#import <Foundation/Foundation.h>


@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate>

 {
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    id *_reloadSectionInfoCompletion;
    BBSettingsGateway *_settingsGateway;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTSectionInfoObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSettingsGateway:(id)arg0 ;
-(id)sectionInfoForSectionID:(id)arg0 ;
-(void)_getUniversalSectionIDs:(id)arg0 sectionIDEnumerator:(id)arg1 completion:(id)arg2 ;
-(void)_reloadSectionInfosWithCompletion:(id)arg0 ;
-(void)_settingsGatewayReconnected:(id)arg0 ;
-(void)dealloc;
-(void)observer:(id)arg0 noteServerConnectionStateChanged:(BOOL)arg1 ;
-(void)observer:(id)arg0 removeSection:(id)arg1 ;
-(void)observer:(id)arg0 updateSectionInfo:(id)arg1 ;
-(void)reloadWithCompletion:(id)arg0 ;
-(void)updateSectionInfoBySectionIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif