// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKEYVALUEACCESSOR_H
#define NSKEYVALUEACCESSOR_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSKeyValueAccessor : NSObject {
    id *_containerClassID;
    NSString *_key;
    NSUInteger _hash;
    *unk _implementation;
    SEL _selector;
    NSUInteger _extraArgumentCount;
    *void _extraArgument1;
    *void _extraArgument2;
    *void _extraArgument3;
}




-(*void)extraArgument1;
-(*void)extraArgument2;
-(NSUInteger)extraArgumentCount;
-(SEL)selector;
-(id)containerClassID;
-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 implementation:(*unk)arg2 selector:(SEL)arg3 extraArguments:(*void)arg4 count:(NSUInteger)arg5 ;
-(id)key;
-(void)dealloc;


@end


#endif