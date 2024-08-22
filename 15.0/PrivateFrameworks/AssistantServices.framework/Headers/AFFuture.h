// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFFUTURE_H
#define AFFUTURE_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface AFFuture : NSObject {
    NSObject<OS_dispatch_group> *_group;
    id *_value;
}




-(id)initAndGetSetterBlock:(*id)arg0 ;
-(id)waitForValue:(NSUInteger)arg0 ;


@end


#endif