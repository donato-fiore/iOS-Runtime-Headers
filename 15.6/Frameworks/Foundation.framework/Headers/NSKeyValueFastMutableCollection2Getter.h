// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEFASTMUTABLECOLLECTION2GETTER_H
#define NSKEYVALUEFASTMUTABLECOLLECTION2GETTER_H



#import "NSKeyValueProxyGetter.h"
#import "NSKeyValueGetter.h"
#import "NSKeyValueMutatingCollectionMethodSet.h"

@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {
    NSKeyValueGetter *_baseGetter;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}




-(id)baseGetter;
-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 baseGetter:(id)arg2 mutatingMethods:(id)arg3 proxyClass:(Class)arg4 ;
-(id)mutatingMethods;
-(void)dealloc;


@end


#endif