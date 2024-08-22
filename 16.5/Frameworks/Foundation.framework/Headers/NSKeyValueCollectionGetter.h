// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYVALUECOLLECTIONGETTER_H
#define NSKEYVALUECOLLECTIONGETTER_H



#import "NSKeyValueProxyGetter.h"
#import "NSKeyValueNonmutatingCollectionMethodSet.h"

@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueNonmutatingCollectionMethodSet *_methods;
}




-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 methods:(id)arg2 proxyClass:(Class)arg3 ;
-(id)methods;
-(void)dealloc;


@end


#endif