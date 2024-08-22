// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOMATICRETAINCOUNTWEAKREFERENCE_H
#define CNAUTOMATICRETAINCOUNTWEAKREFERENCE_H



#import "CNWeakReference.h"

@interface CNAutomaticRetainCountWeakReference : CNWeakReference {
    id *_object;
}




-(id)init;
-(id)initWithObject:(id)arg0 ;
-(id)object;


@end


#endif