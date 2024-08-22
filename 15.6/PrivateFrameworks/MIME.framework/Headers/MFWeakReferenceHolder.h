// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFWEAKREFERENCEHOLDER_H
#define MFWEAKREFERENCEHOLDER_H

@protocol NSObject;

#import <Foundation/Foundation.h>


@interface MFWeakReferenceHolder : NSObject {
    id<NSObject> *_reference;
}




+(id)weakReferenceWithObject:(id)arg0 ;
-(id)_initWithObject:(id)arg0 ;
-(id)reference;
-(id)retainedReference;
-(void)dealloc;


@end


#endif