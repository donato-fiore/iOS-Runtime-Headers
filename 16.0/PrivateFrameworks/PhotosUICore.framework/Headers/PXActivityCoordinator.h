// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXACTIVITYCOORDINATOR_H
#define PXACTIVITYCOORDINATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXActivityCoordinator : NSObject {
    NSMutableArray *_records;
}




+(id)coordinatorForActivity:(id)arg0 ;
-(id)init;
-(void)_update;
-(void)registerItem:(id)arg0 ;
-(void)unregisterItem:(id)arg0 ;


@end


#endif