// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEPROXYGETTER_H
#define NSKEYVALUEPROXYGETTER_H



#import "NSKeyValueGetter.h"

@interface NSKeyValueProxyGetter : NSKeyValueGetter {
    Class _proxyClass;
}




-(Class)proxyClass;
-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 proxyClass:(Class)arg2 ;


@end


#endif