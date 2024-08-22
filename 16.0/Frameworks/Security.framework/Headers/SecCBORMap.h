// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECCBORMAP_H
#define SECCBORMAP_H

@class NSMapTable;


#import "SecCBORValue.h"

@interface SecCBORMap : SecCBORValue {
    NSMapTable *m_data;
}




-(id)dictionaryRepresentation;
-(id)getSortedKeys;
-(id)init;
-(int)fieldType;
-(void)setKey:(id)arg0 value:(id)arg1 ;
-(void)write:(id)arg0 ;


@end


#endif