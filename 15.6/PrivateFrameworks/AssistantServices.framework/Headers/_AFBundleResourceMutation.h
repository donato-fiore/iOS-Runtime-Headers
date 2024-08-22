// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFBUNDLERESOURCEMUTATION_H
#define _AFBUNDLERESOURCEMUTATION_H

@class NSString;
@protocol AFBundleResourceMutating;

#import <Foundation/Foundation.h>

#import "AFBundleResource.h"

@interface _AFBundleResourceMutation : NSObject <AFBundleResourceMutating>

 {
    AFBundleResource *_baseModel;
    NSString *_name;
    NSString *_extension;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setExtension:(id)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif