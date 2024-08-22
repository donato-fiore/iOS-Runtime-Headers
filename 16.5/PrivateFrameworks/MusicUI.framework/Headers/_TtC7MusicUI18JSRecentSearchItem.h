// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI18JSRECENTSEARCHITEM_H
#define _TTC7MUSICUI18JSRECENTSEARCHITEM_H

@class JSValue;
@protocol _TtP7MusicUI25JSRecentSearchItemExports_;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI18JSRecentSearchItem : NSObject <_TtP7MusicUI25JSRecentSearchItemExports_>

 {
    ? _timestamp;
    ? _contentDescriptor;
    ? $__lazy_storage_$_context;
}


@property (nonatomic, readonly) JSValue *contentDescriptor;
@property (nonatomic, readonly) JSValue *timestamp;


-(id)init;


@end


#endif