// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONSUPPORTSERVICEDELEGATE_H
#define SBAPPLICATIONSUPPORTSERVICEDELEGATE_H

@class UISApplicationSupportService, NSString;
@protocol UISApplicationSupportServiceDelegate;

#import <Foundation/Foundation.h>


@interface SBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate>

 {
    UISApplicationSupportService *_service;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)service:(id)arg0 overrideClientInitialization:(id)arg1 ;
-(id)init;
-(id)service:(id)arg0 initializeClient:(id)arg1 ;
-(void)_rebuildDefaultContext;
-(void)dealloc;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg0 animationType:(NSUInteger)arg1 destroySessions:(BOOL)arg2 forClient:(id)arg3 completion:(id)arg4 ;
-(void)requestPasscodeCheckUIForClient:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestPasscodeUnlockUIForClient:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif