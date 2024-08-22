// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKICONMANAGER_H
#define VKICONMANAGER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "VKSharedResources.h"
#import "VKInternalIconManager.h"

@interface VKIconManager : NSObject {
    VKSharedResources *_sharedResources;
    VKInternalIconManager *_iconManager;
    BOOL _usingSingletonIconManager;
    mutex _lock;
    NSObject<OS_dispatch_source> *_iconManagerReleaseSource;
    unsigned int _iconManagerTimerID;
}




+(id)sharedManager;
-(?)imageForStyleAttributes:(?)arg0 styleManager:(?)arg1 contentScale:(?)arg2 sizeGroupmodifiers;
-(BOOL)isCachingAtlases;
-(id)_internalIconManager;
-(id)imageForDataID:(unsigned int)arg0 text:(id)arg1 contentScale:(float)arg2 sizeGroup:(NSInteger)arg3 modifiers:(id)arg4 ;
-(id)imageForIconID:(unsigned int)arg0 contentScale:(float)arg1 sizeGroup:(NSInteger)arg2 modifiers:(id)arg3 ;
-(id)imageForImageSourceKey:(id)arg0 ;
-(id)imageForKey:(unsigned int)arg0 value:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(NSInteger)arg3 modifiers:(id)arg4 ;
-(id)imageForName:(id)arg0 contentScale:(float)arg1 sizeGroup:(NSInteger)arg2 modifiers:(id)arg3 ;
-(id)imageForStyleAttributes:(id)arg0 withStylesheetName:(id)arg1 contentScale:(float)arg2 sizeGroup:(NSInteger)arg3 modifiers:(id)arg4 ;
-(id)init;
-(unsigned int)darkVariant;
-(unsigned int)styleAttributeTransitSystemTypeKey;
-(unsigned int)styleAttributeTransitTypeKey;
-(unsigned int)trafficIncidentTypeKey;
-(void)dealloc;
-(void)purge;
-(void)setIsCachingAtlases:(BOOL)arg0 ;


@end


#endif