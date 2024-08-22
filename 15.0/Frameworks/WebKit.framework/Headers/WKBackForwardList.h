// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKBACKFORWARDLIST_H
#define WKBACKFORWARDLIST_H

@class NSArray, NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKBackForwardListItem.h"

@interface WKBackForwardList : NSObject <WKObject>

 {
    ObjectStorage<WebKit::WebBackForwardList> _list;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) WKBackForwardListItem *backItem;
@property (readonly, copy, nonatomic) NSArray *backList;
@property (readonly, nonatomic) WKBackForwardListItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WKBackForwardListItem *forwardItem;
@property (readonly, copy, nonatomic) NSArray *forwardList;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)itemAtIndex:(NSInteger)arg0 ;
-(void)_clear;
-(void)_removeAllItems;
-(void)dealloc;


@end


#endif