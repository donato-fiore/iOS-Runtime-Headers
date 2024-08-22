// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDDIAGNOSTICCOLLECTOR_H
#define DEDDIAGNOSTICCOLLECTOR_H

@class NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface DEDDiagnosticCollector : NSObject

@property (retain) NSArray *cachedExtensions; // ivar: _cachedExtensions
@property NSUInteger collectionTimeout; // ivar: _collectionTimeout
@property (retain) NSObject<OS_os_log> *log; // ivar: _log


-(BOOL)isDiagnosticExtensionAvailable;
-(id)availableDiagnosticExtensions;
-(id)collectItemsWithIdentifier:(id)arg0 parameters:(id)arg1 ;
-(id)extensionForIdentifier:(id)arg0 ;
-(id)extensionManager;
-(id)init;
-(void)cleanupItemsWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 ;
-(void)loadExtensionTextDataInExtension:(id)arg0 localization:(id)arg1 ;
-(void)prepareItemsWithDeferredExtensionInfo:(id)arg0 ;
-(void)prepareItemsWithIdentifier:(id)arg0 parameters:(id)arg1 session:(id)arg2 ;


@end


#endif