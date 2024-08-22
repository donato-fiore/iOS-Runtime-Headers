// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVCONTENTREGISTRY_H
#define PVCONTENTREGISTRY_H

@class NSMutableDictionary, NSLock;

#import <Foundation/Foundation.h>


@interface PVContentRegistry : NSObject {
    NSMutableDictionary *_contentDictionary;
    NSLock *_dictionaryLock;
}




+(id)sharedInstance;
+(void)willTerminate:(id)arg0 ;
-(BOOL)hasStyleTransfer:(id)arg0 ;
-(BOOL)isContentIDRegistered:(id)arg0 ;
-(BOOL)isSelfie:(id)arg0 ;
-(BOOL)isSingleWordTranscription:(id)arg0 ;
-(BOOL)isSketch:(id)arg0 ;
-(BOOL)isTranscription:(id)arg0 ;
-(BOOL)registerContentBundle:(id)arg0 ;
-(BOOL)registerContentClass:(Class)arg0 forID:(id)arg1 type:(id)arg2 withProperties:(id)arg3 ;
-(BOOL)registerContentDictionary:(id)arg0 withBaseDir:(id)arg1 ;
-(BOOL)registerContentFile:(id)arg0 forID:(id)arg1 properties:(id)arg2 ;
-(BOOL)unregisterContentID:(id)arg0 ;
-(id)bundleForID:(id)arg0 ;
-(id)contentGroupForID:(id)arg0 ;
-(id)contentPathForID:(id)arg0 ;
-(id)contentPropertiesForID:(id)arg0 ;
-(id)createContentInstance:(id)arg0 ;
-(id)init;
-(id)listAllContentGroups;
-(id)listAllContentIDs;
-(id)listIDsForContentGroup:(id)arg0 ;
-(id)listIDsForContentGroups:(id)arg0 ;
-(id)listIDsForContentType:(id)arg0 ;
-(id)listIDsForContentTypes:(id)arg0 ;
-(id)lookupPropertyForID:(id)arg0 property:(id)arg1 ;
-(void)dealloc;
-(void)initContentRegistry;
-(void)initContentRegistryWithHostDelegate:(id)arg0 ;
-(void)registerBuiltIns;


@end


#endif