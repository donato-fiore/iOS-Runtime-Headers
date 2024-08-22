// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEIVARMUTABLECOLLECTIONGETTER_H
#define NSKEYVALUEIVARMUTABLECOLLECTIONGETTER_H



#import "NSKeyValueProxyGetter.h"

@interface NSKeyValueIvarMutableCollectionGetter : NSKeyValueProxyGetter {
    *objc_ivar _ivar;
}




-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 containerIsa:(Class)arg2 ivar:(struct objc_ivar *)arg3 proxyClass:(Class)arg4 ;
-(struct objc_ivar *)ivar;


@end


#endif