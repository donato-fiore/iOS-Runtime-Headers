// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSBUNDLEWEBEXTENSIONBROWSINGCONTEXT_H
#define WBSBUNDLEWEBEXTENSIONBROWSINGCONTEXT_H

@class WKBrowsingContextHandle, NSNumber;

#import <Foundation/Foundation.h>


@interface WBSBundleWebExtensionBrowsingContext : NSObject

@property (readonly, nonatomic) WKBrowsingContextHandle *browsingContextHandle; // ivar: _browsingContextHandle
@property (readonly, nonatomic) NSNumber *tabID; // ivar: _tabID
@property (readonly, nonatomic) NSNumber *windowID; // ivar: _windowID


-(id)initWithBrowingContextHandle:(id)arg0 tabID:(id)arg1 windowID:(id)arg2 ;


@end


#endif