// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBDISPLAYSCALEMAPPINGCACHE_H
#define _SBDISPLAYSCALEMAPPINGCACHE_H

@class NSMutableDictionary, FBDisplayManager, NSString;
@protocol FBSDisplayObserving;

#import <Foundation/Foundation.h>


@interface _SBDisplayScaleMappingCache : NSObject <FBSDisplayObserving>

 {
    NSMutableDictionary *_hardwareIdentifierToMappings;
    FBDisplayManager *_displayManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)mappingForDisplayIdentifier:(id)arg0 ;
-(void)cacheMapping:(id)arg0 ;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;


@end


#endif