// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBORMAP_H
#define CBORMAP_H

@class NSMapTable;


#import "CBORValue.h"

@interface CBORMap : CBORValue {
    NSMapTable *m_data;
}




-(id)getSortedKeys;
-(id)init;
-(int)fieldType;
-(void)setKey:(id)arg0 value:(id)arg1 ;
-(void)write:(id)arg0 ;


@end


#endif