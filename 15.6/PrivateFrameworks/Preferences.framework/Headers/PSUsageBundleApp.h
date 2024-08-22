// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUSAGEBUNDLEAPP_H
#define PSUSAGEBUNDLEAPP_H

@class NSString, NSArray;
@protocol PSStorageReporting;

#import <Foundation/Foundation.h>

#import "PSWeakReference.h"

@interface PSUsageBundleApp : NSObject {
    PSWeakReference *_storageReporterReference;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic, getter=isDeletionRestricted) BOOL deletionRestricted; // ivar: _deletionRestricted
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) float totalSize; // ivar: _totalSize
@property (weak, nonatomic) NSObject<PSStorageReporting> *usageBundleStorageReporter;


+(id)usageBundleAppForBundleWithIdentifier:(id)arg0 withTotalSize:(float)arg1 ;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg0 withTotalSize:(float)arg1 andCategories:(id)arg2 ;
-(id)description;


@end


#endif