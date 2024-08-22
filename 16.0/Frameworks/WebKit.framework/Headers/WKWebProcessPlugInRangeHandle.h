// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWEBPROCESSPLUGINRANGEHANDLE_H
#define WKWEBPROCESSPLUGINRANGEHANDLE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "WKWebProcessPlugInFrame.h"

@interface WKWebProcessPlugInRangeHandle : NSObject <WKObject>

 {
    ObjectStorage<WebKit::InjectedBundleRangeHandle> _rangeHandle;
}


@property (readonly) *Object _apiObject;
@property (readonly) *void _rangeHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *frame;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text;


+(id)rangeHandleWithJSValue:(id)arg0 inContext:(id)arg1 ;
-(id)detectDataWithTypes:(NSUInteger)arg0 context:(id)arg1 ;
-(void)dealloc;


@end


#endif