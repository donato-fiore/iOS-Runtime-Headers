// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKEXPERIMENTALFEATURE_H
#define _WKEXPERIMENTALFEATURE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface _WKExperimentalFeature : NSObject <WKObject>

 {
    ObjectStorage<API::ExperimentalFeature> _experimentalFeature;
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
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif