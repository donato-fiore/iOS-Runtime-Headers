// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKBACKFORWARDLISTITEM_H
#define WKBACKFORWARDLISTITEM_H

@class NSURL, NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKBackForwardListItem : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebBackForwardListItem> _item;
}


@property (readonly, copy) NSURL *URL;
@property (readonly) *Object _apiObject;
@property (readonly) *void _item;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSURL *initialURL;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;


-(struct CGImage *)_copySnapshotForTesting;
-(struct CGPoint )_scrollPosition;
-(void)dealloc;


@end


#endif