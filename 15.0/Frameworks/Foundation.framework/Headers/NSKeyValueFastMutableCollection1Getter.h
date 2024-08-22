// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEFASTMUTABLECOLLECTION1GETTER_H
#define NSKEYVALUEFASTMUTABLECOLLECTION1GETTER_H



#import "NSKeyValueProxyGetter.h"
#import "NSKeyValueNonmutatingCollectionMethodSet.h"
#import "NSKeyValueMutatingCollectionMethodSet.h"

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {
    NSKeyValueNonmutatingCollectionMethodSet *_nonmutatingMethods;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}




-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 nonmutatingMethods:(id)arg2 mutatingMethods:(id)arg3 proxyClass:(Class)arg4 ;
-(id)mutatingMethods;
-(id)nonmutatingMethods;
-(void)dealloc;


@end


#endif