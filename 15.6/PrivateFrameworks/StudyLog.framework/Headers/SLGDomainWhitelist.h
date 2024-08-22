// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLGDOMAINWHITELIST_H
#define SLGDOMAINWHITELIST_H

@class NSSet, NSString;
@protocol SLGDomainWhitelisting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SLGDomainWhitelist : NSObject <SLGDomainWhitelisting>

 {
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSSet *_whitelist;
    BOOL _allowUnspecifiedDomains;
}


@property (nonatomic) BOOL allowUnspecifiedDomains;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *whitelist;


-(BOOL)isDomainWhitelisted:(id)arg0 ;
-(id)init;
-(void)_beginObservingSettings;
-(void)_lockQueue_loadSettings;
-(void)_lockQueue_loadUnspecifiedDomains;
-(void)_lockQueue_loadWhitelist;
-(void)_reloadSettings;
-(void)_stopObservingSettings;
-(void)addDomain:(id)arg0 ;
-(void)dealloc;
-(void)removeDomain:(id)arg0 ;


@end


#endif