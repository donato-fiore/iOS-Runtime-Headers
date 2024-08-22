// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPITUNESSTOREURLOVERRIDECHECKER_H
#define PPITUNESSTOREURLOVERRIDECHECKER_H

@class NSDictionary, NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PPITunesStoreURLOverrideChecker : NSObject {
    id *_isAppAvailableToOpenURLBlock;
    NSDictionary *_propertyList;
    NSMutableDictionary *_compiledPatterns;
    NSMutableSet *_supportedSchemes;
    NSMutableSet *_failedSchemes;
    NSMutableSet *_failedHosts;
}




-(id)init;
-(id)initWithPlistPaths:(id)arg0 isAppAvailableToOpenURLBlock:(id)arg1 ;
-(id)initWithPropertyList:(id)arg0 isAppAvailableToOpenURLBlock:(id)arg1 ;
-(id)overrideForURL:(id)arg0 ;


@end


#endif