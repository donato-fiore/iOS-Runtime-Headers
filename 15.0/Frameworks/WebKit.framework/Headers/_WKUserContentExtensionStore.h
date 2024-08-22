// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKUSERCONTENTEXTENSIONSTORE_H
#define _WKUSERCONTENTEXTENSIONSTORE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKContentRuleListStore.h"

@interface _WKUserContentExtensionStore : NSObject <WKObject>

 {
    RetainPtr<WKContentRuleListStore> _contentRuleListStore;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) WKContentRuleListStore *_contentRuleListStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultStore;
+(id)storeWithURL:(id)arg0 ;
-(id)_initWithWKContentRuleListStore:(id)arg0 ;
-(void)_invalidateContentExtensionVersionForIdentifier:(id)arg0 ;
-(void)_removeAllContentExtensions;
-(void)compileContentExtensionForIdentifier:(id)arg0 encodedContentExtension:(id)arg1 completionHandler:(id)arg2 ;
-(void)lookupContentExtensionForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeContentExtensionForIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif