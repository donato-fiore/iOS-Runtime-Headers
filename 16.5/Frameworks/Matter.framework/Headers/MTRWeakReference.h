// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRWEAKREFERENCE_H
#define MTRWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface MTRWeakReference : NSObject {
    id *_object;
}




+(id)weakReferenceWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)strongObject;


@end


#endif