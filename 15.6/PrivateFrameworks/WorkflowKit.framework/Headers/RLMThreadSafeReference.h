// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMTHREADSAFEREFERENCE_H
#define RLMTHREADSAFEREFERENCE_H


#import <Foundation/Foundation.h>


@interface RLMThreadSafeReference : NSObject {
    unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> _reference;
    id *_metadata;
    Class _type;
}


@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;


+(id)referenceWithThreadConfined:(id)arg0 ;
-(id)initWithThreadConfined:(id)arg0 ;
-(id)resolveReferenceInRealm:(id)arg0 ;


@end


#endif