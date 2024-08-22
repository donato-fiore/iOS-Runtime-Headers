// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHAREGROUPDELAYCHECKER_H
#define TSCH3DSHAREGROUPDELAYCHECKER_H

@protocol TSCH3DSharegroupDelayCheckerParent;

#import <Foundation/Foundation.h>


@interface TSCH3DSharegroupDelayChecker : NSObject {
    id<TSCH3DSharegroupDelayCheckerParent> *_parent;
}


@property (nonatomic) BOOL condition; // ivar: _condition


-(id)initWithParent:(id)arg0 ;
-(void)invalidateCondition;
-(void)p_cancelCheckCondition;
-(void)p_checkCondition;
-(void)p_scheduleCheckConditionOnMainThread;
-(void)scheduleCheckCondition;


@end


#endif