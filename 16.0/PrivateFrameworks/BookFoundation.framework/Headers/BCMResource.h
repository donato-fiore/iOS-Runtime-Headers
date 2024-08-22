// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCMRESOURCE_H
#define BCMRESOURCE_H

@class NSDictionary, NSString;
@protocol BFMResource;

#import <Foundation/Foundation.h>


@interface BCMResource : NSObject <BFMResource>

 {
    ? data;
    ? config;
    ? $__lazy_storage_$_relationships;
    ? $__lazy_storage_$_views;
}


@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *href;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSDictionary *meta;
@property (nonatomic, copy) NSDictionary *relationships;
@property (nonatomic, readonly) NSString *socialHighlightID;
@property (nonatomic, readonly) NSInteger type;
@property (nonatomic, copy) NSDictionary *views;


-(id)init;


@end


#endif