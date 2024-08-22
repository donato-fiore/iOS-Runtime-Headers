// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSKEYVALUESLOWMUTABLECOLLECTIONGETTER_H
#define NSKEYVALUESLOWMUTABLECOLLECTIONGETTER_H



#import "NSKeyValueProxyGetter.h"
#import "NSKeyValueGetter.h"
#import "NSKeyValueSetter.h"

@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueGetter *_baseGetter;
    NSKeyValueSetter *_baseSetter;
}




-(BOOL)treatNilValuesLikeEmptyCollections;
-(id)baseGetter;
-(id)baseSetter;
-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 baseGetter:(id)arg2 baseSetter:(id)arg3 containerIsa:(Class)arg4 proxyClass:(Class)arg5 ;
-(void)dealloc;


@end


#endif