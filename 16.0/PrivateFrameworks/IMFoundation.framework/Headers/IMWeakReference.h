// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMWEAKREFERENCE_H
#define IMWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface IMWeakReference : NSObject {
    id *_object;
    NSUInteger _objectAddress;
}




+(id)weakRefWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyObject;
-(id)initRefWithObject:(id)arg0 ;
-(id)object;


@end


#endif