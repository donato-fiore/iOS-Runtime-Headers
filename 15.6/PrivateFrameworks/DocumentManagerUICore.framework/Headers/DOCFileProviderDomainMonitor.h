// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCFILEPROVIDERDOMAINMONITOR_H
#define DOCFILEPROVIDERDOMAINMONITOR_H

@class NSMutableDictionary, NSOrderedSet;

#import <Foundation/Foundation.h>


@interface DOCFileProviderDomainMonitor : NSObject {
    id *_providerDomainMonitoringContext;
    NSMutableDictionary *_providerNames;
    NSOrderedSet *_monitoredIdentifiers;
    id *_monitorCallback;
}




-(id)init;
-(void)dealloc;
-(void)monitorProviderDomainNamesForSourceIdentifiers:(id)arg0 callback:(id)arg1 ;
-(void)notifyIfNecessary;


@end


#endif