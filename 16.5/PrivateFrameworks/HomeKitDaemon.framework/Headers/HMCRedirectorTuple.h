// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCREDIRECTORTUPLE_H
#define HMCREDIRECTORTUPLE_H

@class HMFObject;
@protocol HMFCancellable;


#import "HMCRedirector.h"

@interface HMCRedirectorTuple : HMFObject <HMFCancellable>

 {
    HMCRedirector *_owner;
    id *_target;
    SEL _selector;
}




-(id)attributeDescriptions;
-(id)description;
-(void)cancel;


@end


#endif