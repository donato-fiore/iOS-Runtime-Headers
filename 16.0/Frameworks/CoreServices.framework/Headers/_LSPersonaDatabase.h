// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSPERSONADATABASE_H
#define _LSPERSONADATABASE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _LSPersonaDatabase : NSObject {
    os_unfair_lock_s _ivarLock;
    os_unfair_lock_s _uncachedCalloutLock;
    NSDictionary *_cachedBundleIDToPersonasMap;
    NSString *_cachedSystemPersonaUniqueString;
    NSString *_cachedPersonalPersonaUniqueString;
    NSUInteger _userManagementGenerationNumber;
}




-(id)getBundleIDToPersonasWithAttributesMap;
-(id)initPrivately;
-(void)getCachedBundleIDToPersonasWithAttributesMap:(*id)arg0 systemPersonaUniqueString:(*id)arg1 personalPersonaUniqueString:(*id)arg2 ;
-(void)getUncachedBundleIDToPersonasWithAttributesMap:(*id)arg0 systemPersonaUniqueString:(*id)arg1 personalPersonaUniqueString:(*id)arg2 ;
-(void)personaListDidUpdate;
-(void)refreshFromUserManagementIfNecessary;


@end


#endif