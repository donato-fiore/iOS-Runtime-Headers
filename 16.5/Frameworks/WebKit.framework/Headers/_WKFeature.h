// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKFEATURE_H
#define _WKFEATURE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKFeature : NSObject <WKObject>

 {
    ObjectStorage<API::Feature> _wrappedFeature;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;


-(BOOL)isKindOfClass:(Class)arg0 ;
-(void)dealloc;


@end


#endif