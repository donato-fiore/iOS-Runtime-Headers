// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLARGUMENTINTERNAL_H
#define MTLARGUMENTINTERNAL_H



#import "MTLArgument.h"
#import "MTLBindingInternal.h"

@interface MTLArgumentInternal : MTLArgument {
    MTLBindingInternal *_binding;
}




-(id)initWithBinding:(id)arg0 ;
-(void)dealloc;


@end


#endif