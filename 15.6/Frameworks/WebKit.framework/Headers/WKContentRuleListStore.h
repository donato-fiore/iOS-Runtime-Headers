// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKCONTENTRULELISTSTORE_H
#define WKCONTENTRULELISTSTORE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKContentRuleListStore : NSObject <WKObject>

 {
    ObjectStorage<API::ContentRuleListStore> _contentRuleListStore;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultStore;
+(id)defaultStoreWithLegacyFilename;
+(id)storeWithURL:(id)arg0 ;
+(id)storeWithURLAndLegacyFilename:(id)arg0 ;
-(void)_getContentRuleListSourceForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_invalidateContentRuleListVersionForIdentifier:(id)arg0 ;
-(void)_removeAllContentRuleLists;
-(void)compileContentExtensionForIdentifier:(id)arg0 encodedContentExtension:(id)arg1 completionHandler:(id)arg2 ;
-(void)compileContentRuleListForIdentifier:(id)arg0 encodedContentRuleList:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)getAvailableContentRuleListIdentifiers:(id)arg0 ;
-(void)lookUpContentRuleListForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)lookupContentExtensionForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeContentExtensionForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeContentRuleListForIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif