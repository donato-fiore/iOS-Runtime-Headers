// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSNETSERVICEBROWSER_H
#define NSNETSERVICEBROWSER_H

@protocol NSNetServiceBrowserDelegate;

#import <Foundation/Foundation.h>


@interface NSNetServiceBrowser : NSObject {
    id *_netServiceBrowser;
    id *_delegate;
    *void _reserved;
}


@property NSObject<NSNetServiceBrowserDelegate> *delegate;
@property BOOL includesPeerToPeer; // ivar: _includesPeerToPeer


-(id)init;
-(struct __CFNetServiceBrowser *)_internalNetServiceBrowser;
-(void)_dispatchCallBack:(*void)arg0 flags:(NSUInteger)arg1 error:(struct ? )arg2 ;
-(void)_setIncludesAWDL:(BOOL)arg0 ;
-(void)dealloc;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)searchForAllDomains;
-(void)searchForBrowsableDomains;
-(void)searchForRegistrationDomains;
-(void)searchForServicesOfType:(id)arg0 inDomain:(id)arg1 ;
-(void)stop;


@end


#endif