// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNLAZYARRAYFASTENUMERATIONSOURCE_H
#define _CNLAZYARRAYFASTENUMERATIONSOURCE_H

@protocol _CNLazyArrayOperation, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface _CNLazyArrayFastEnumerationSource : NSObject <_CNLazyArrayOperation>

 {
    id<NSFastEnumeration> *_fastEnumeration;
    ? _state;
    BOOL _firstCall;
    NSInteger _mutationsPtrValue;
    NSUInteger _count;
    NSUInteger _index;
    id _stackbuf;
}




-(id)initWithFastEnumeration:(id)arg0 ;
-(id)nextObject;
-(void)fillBuffer;


@end


#endif