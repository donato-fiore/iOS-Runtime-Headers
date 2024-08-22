// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYVALUENOTIFYINGMUTABLECOLLECTIONGETTER_H
#define NSKEYVALUENOTIFYINGMUTABLECOLLECTIONGETTER_H



#import "NSKeyValueProxyGetter.h"

@interface NSKeyValueNotifyingMutableCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueProxyGetter *_mutableCollectionGetter;
}




-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 mutableCollectionGetter:(id)arg2 proxyClass:(Class)arg3 ;
-(id)mutableCollectionGetter;
-(void)dealloc;


@end


#endif