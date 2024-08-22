// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSYNCHRONIZEOPERATION_H
#define _SBSYNCHRONIZEOPERATION_H

@class NSOperation, NSMutableArray, NSString;
@protocol OS_dispatch_group;



@interface _SBSynchronizeOperation : NSOperation {
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}


@property (retain, nonatomic) NSString *humanReadableDescription; // ivar: _humanReadableDescription


-(id)init;
-(void)addTask:(id)arg0 ;
-(void)main;


@end


#endif