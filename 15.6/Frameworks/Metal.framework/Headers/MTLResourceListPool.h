// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLRESOURCELISTPOOL_H
#define MTLRESOURCELISTPOOL_H


#import <Foundation/Foundation.h>


@interface MTLResourceListPool : NSObject {
    _MTLResourceListPoolPrivate _priv;
    int _resourceListCapacity;
}




-(id)initWithResourceListCapacity:(int)arg0 ;
-(int)availableCount;
-(void)dealloc;
-(void)purge;


@end


#endif