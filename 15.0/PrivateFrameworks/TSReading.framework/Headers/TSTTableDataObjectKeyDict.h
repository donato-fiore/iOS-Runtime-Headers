// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEDATAOBJECTKEYDICT_H
#define TSTTABLEDATAOBJECTKEYDICT_H


#import <Foundation/Foundation.h>


@interface TSTTableDataObjectKeyDict : NSObject {
    *void mMap;
}




-(NSUInteger)count;
-(id)init;
-(unsigned int)keyForObject:(id)arg0 ;
-(void)dealloc;
-(void)removeAllKeys;
-(void)removeKeyForObject:(id)arg0 ;
-(void)setKey:(unsigned int)arg0 forObject:(id)arg1 ;


@end


#endif