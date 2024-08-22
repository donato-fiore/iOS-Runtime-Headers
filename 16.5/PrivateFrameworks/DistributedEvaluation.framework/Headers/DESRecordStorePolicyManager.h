// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESRECORDSTOREPOLICYMANAGER_H
#define DESRECORDSTOREPOLICYMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "DESBundleRegistry.h"

@interface DESRecordStorePolicyManager : NSObject {
    DESBundleRegistry *_bundleRegistry;
    NSURL *_policyPathURL;
}




+(id)sharedInstance;
-(NSUInteger)coreDuetEventLimitForPluginID:(id)arg0 ;
-(NSUInteger)daysToExpirationOfRecordsForPluginID:(id)arg0 ;
-(NSUInteger)maximumNumberOfRecordsForPluginID:(id)arg0 ;
-(NSUInteger)unsignedIntegerForPluginID:(id)arg0 key:(id)arg1 defaultValue:(NSUInteger)arg2 ;
-(id)arrayOfStringForPlugin:(id)arg0 key:(id)arg1 defaultValue:(id)arg2 ;
-(id)coreDuetEventQueryForPluginID:(id)arg0 ;
-(id)coreDuetPredicateForPluginID:(id)arg0 ;
-(id)initWithBundleRegistry:(id)arg0 policyPathURL:(id)arg1 ;
-(id)policyForNSExtensionPluginID:(id)arg0 ;
-(id)policyForPluginID:(id)arg0 ;
-(id)stringForPluginID:(id)arg0 key:(id)arg1 defaultValue:(id)arg2 ;
-(id)supportedCoreDuetEventStreamNamesForPluginID:(id)arg0 ;
-(id)supportedRecordTypesForPluginID:(id)arg0 ;


@end


#endif