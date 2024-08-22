// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCREDIRECTORSTRONGTUPLE_H
#define HMCREDIRECTORSTRONGTUPLE_H

@class HMFObject;


#import "HMCRedirectorTuple.h"

@interface HMCRedirectorStrongTuple : HMFObject {
    HMCRedirectorTuple *_tuple;
    id *_target;
    SEL _selector;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)description;


@end


#endif