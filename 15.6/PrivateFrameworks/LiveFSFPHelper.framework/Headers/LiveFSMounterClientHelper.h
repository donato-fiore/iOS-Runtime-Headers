// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSMOUNTERCLIENTHELPER_H
#define LIVEFSMOUNTERCLIENTHELPER_H

@class NSString;
@protocol LiveFSMounterClient, LiveFSMounterClientHelper;

#import <Foundation/Foundation.h>


@interface LiveFSMounterClientHelper : NSObject <LiveFSMounterClient, LiveFSMounterClientHelper>



@property (retain) NSString *providerName; // ivar: _providerName


-(id)LiveMounterClientHelperDestroyDomain:(id)arg0 ;
-(void)LiveMounterClientCleanupDomain:(id)arg0 how:(int)arg1 reply:(id)arg2 ;
-(void)LiveMounterClientCreateDomain:(id)arg0 displayName:(id)arg1 how:(int)arg2 reply:(id)arg3 ;
-(void)LiveMounterClientCreateDomain:(id)arg0 displayName:(id)arg1 how:(int)arg2 storageName:(id)arg3 reply:(id)arg4 ;
-(void)LiveMounterClientCreateDomain:(id)arg0 how:(int)arg1 reply:(id)arg2 ;
-(void)LiveMounterClientHelperSetProviderName:(id)arg0 ;


@end


#endif