// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIDECARTRANSFERGROUP_H
#define SIDECARTRANSFERGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SidecarTransferGroup : NSObject {
    NSInteger _completedItems;
    NSArray *_mutableItems;
    NSInteger _type;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSInteger type;


-(BOOL)handleMessage:(id)arg0 error:(*id)arg1 ;
-(id)initWithMessage:(id)arg0 ;


@end


#endif