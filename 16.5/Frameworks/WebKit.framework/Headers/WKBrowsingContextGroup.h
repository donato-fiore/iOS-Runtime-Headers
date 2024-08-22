// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKBROWSINGCONTEXTGROUP_H
#define WKBROWSINGCONTEXTGROUP_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKBrowsingContextGroup : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebPageGroup> _pageGroup;
}


@property (readonly) *Object _apiObject;
@property (readonly) *OpaqueWKPageGroup _pageGroupRef;
@property BOOL allowsJavaScript;
@property BOOL allowsPlugIns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL privateBrowsingEnabled;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 ;
-(void)addUserScript:(id)arg0 baseURL:(id)arg1 includeMatchPatternStrings:(id)arg2 excludeMatchPatternStrings:(id)arg3 injectionTime:(int)arg4 mainFrameOnly:(BOOL)arg5 ;
-(void)addUserStyleSheet:(id)arg0 baseURL:(id)arg1 includeMatchPatternStrings:(id)arg2 excludeMatchPatternStrings:(id)arg3 mainFrameOnly:(BOOL)arg4 ;
-(void)dealloc;
-(void)removeAllUserScripts;
-(void)removeAllUserStyleSheets;


@end


#endif