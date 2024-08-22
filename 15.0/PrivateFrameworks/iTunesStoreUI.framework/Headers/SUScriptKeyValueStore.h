// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTKEYVALUESTORE_H
#define SUSCRIPTKEYVALUESTORE_H

@class NSString, SSKeyValueStore;


#import "SUScriptObject.h"

@interface SUScriptKeyValueStore : SUScriptObject {
    NSString *_domain;
    SSKeyValueStore *_keyValueStore;
}




+(id)_checkOutStoreWithDomain:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)_popStoreWithDomain:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)initWithDomain:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)dealloc;
-(void)getValueForKey:(id)arg0 usingFunction:(id)arg1 ;
-(void)removeAllValues;
-(void)removeValueForKey:(id)arg0 ;
-(void)setValueForKey:(id)arg0 value:(id)arg1 ;


@end


#endif