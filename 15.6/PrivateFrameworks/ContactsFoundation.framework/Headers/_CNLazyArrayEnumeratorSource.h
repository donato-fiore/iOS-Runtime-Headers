// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNLAZYARRAYENUMERATORSOURCE_H
#define _CNLAZYARRAYENUMERATORSOURCE_H

@class NSEnumerator;
@protocol _CNLazyArrayOperation;

#import <Foundation/Foundation.h>


@interface _CNLazyArrayEnumeratorSource : NSObject <_CNLazyArrayOperation>

 {
    NSEnumerator *_enumerator;
}




-(id)initWithEnumerator:(id)arg0 ;
-(id)nextObject;


@end


#endif