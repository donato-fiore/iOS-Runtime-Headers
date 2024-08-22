// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSINSPECTOR_H
#define CLSINSPECTOR_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLSInspector : NSObject {
    NSArray *_profileClasses;
    NSMutableDictionary *_profileClassesByIdentifier;
    NSArray *_informantClasses;
    NSMutableDictionary *_informantClassesByIdentifier;
    NSMutableDictionary *_informantClassesByFamilyIdentifier;
}




+(id)sharedInspector;
+(void)invalidateAllSharedCaches;
+(void)invalidateSharedPersistentCaches;
+(void)invalidateSharedPersistentCachesForGeoServiceProviderChange;
+(void)invalidateSharedTransientCaches;
-(Class)informantClassForIdentifier:(id)arg0 ;
-(Class)profileClassForIdentifier:(id)arg0 ;
-(id)informantClassesForAnyIdentifier:(id)arg0 ;
-(id)informantClassesForFamilyIdentifier:(id)arg0 ;
-(id)informantIdentifierForHash:(NSUInteger)arg0 ;
-(id)informantIdentifiersForAnyIdentifier:(id)arg0 ;
-(id)init;
-(id)profileIdentifierForHash:(NSUInteger)arg0 ;
-(void)performInvestigation:(id)arg0 ;
-(void)performInvestigation:(id)arg0 options:(NSUInteger)arg1 progressBlock:(id)arg2 ;
-(void)performInvestigation:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif