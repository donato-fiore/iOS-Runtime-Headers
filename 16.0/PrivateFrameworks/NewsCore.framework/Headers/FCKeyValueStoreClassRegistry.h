// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCKEYVALUESTORECLASSREGISTRY_H
#define FCKEYVALUESTORECLASSREGISTRY_H


#import <Foundation/Foundation.h>


@interface FCKeyValueStoreClassRegistry : NSObject {
    unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, std::allocator<std::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> _registry;
}




-(Class)classForValueType:(int)arg0 ;
-(id)init;
-(void)registerClass:(Class)arg0 ;


@end


#endif