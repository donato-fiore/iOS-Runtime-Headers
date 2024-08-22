// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKFRAMETREENODE_H
#define _WKFRAMETREENODE_H

@class NSArray, NSString;
@protocol WKObject;


#import "WKFrameInfo.h"

@interface _WKFrameTreeNode : WKFrameInfo <WKObject>

 {
    ObjectStorage<API::FrameTreeNode> _node;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isMainFrame;
-(id)_handle;
-(id)_parentFrameHandle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)request;
-(id)securityOrigin;
-(id)webView;
-(void)dealloc;


@end


#endif