// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSGLOBALCONFIGURATIONMANAGER_H
#define DNDSGLOBALCONFIGURATIONMANAGER_H

@class NSString;
@protocol DNDSSysdiagnoseDataProvider, DNDSBackingStoreDelegate, DNDSGlobalConfigurationStoreDelegate, DNDSGlobalConfigurationStoring, DNDSGlobalConfigurationManagerDelegate;

#import <Foundation/Foundation.h>


@interface DNDSGlobalConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStoreDelegate, DNDSGlobalConfigurationStoreDelegate>

 {
    id<DNDSGlobalConfigurationStoring> *_backingStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSGlobalConfigurationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(BOOL)getPreventAutoReplyReturningError:(*id)arg0 ;
-(BOOL)setConfiguration:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setPreventAutoReply:(BOOL)arg0 withError:(*id)arg1 ;
-(NSUInteger)_writeConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)backingStore:(id)arg0 migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3 ;
-(id)fallbackConfiguration;
-(id)getConfigurationReturningError:(*id)arg0 ;
-(id)initWithBackingStore:(id)arg0 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)dealloc;
-(void)globalConfigurationStore:(id)arg0 didUpdatePreventAutoReplySetting:(BOOL)arg1 ;


@end


#endif