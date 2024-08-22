// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXSTRUCTMUTABLEPROXYBASE_H
#define CKXSTRUCTMUTABLEPROXYBASE_H



#import "CKXStructProxyBase.h"

@interface CKXStructMutableProxyBase : CKXStructProxyBase {
    unordered_map<unsigned long long, CKXListInstance, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CKXListInstance>>> fieldTokenToListInstance;
}




-(BOOL)isMutable;
-(struct ? )mutableListInstanceForField:(NSUInteger)arg0 ;
-(void)commit;
-(void)reset;


@end


#endif