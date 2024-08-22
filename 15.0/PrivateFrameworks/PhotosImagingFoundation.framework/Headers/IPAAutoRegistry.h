// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPAAUTOREGISTRY_H
#define IPAAUTOREGISTRY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IPAAutoRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableDictionary *_entries;
}




+(id)sharedRegistry;
+(void)setSharedRegistry:(id)arg0 ;
-(BOOL)hasMappingForAutoIdentifier:(id)arg0 operationIdentifier:(id)arg1 ;
-(BOOL)isPersistableAutoIdentifier:(id)arg0 forOperationIdentifier:(id)arg1 ;
-(Class)settingsClassForAutoIdentifier:(id)arg0 operationIdentifier:(id)arg1 ;
-(id)_entryForAutoIdentifier:(id)arg0 operationIdentifier:(id)arg1 ;
-(id)init;
-(void)registerAutoCalculatorSettingsClass:(Class)arg0 toAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 ;
-(void)registerAutoCalculatorSettingsClass:(Class)arg0 toAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 persistable:(BOOL)arg3 ;


@end


#endif