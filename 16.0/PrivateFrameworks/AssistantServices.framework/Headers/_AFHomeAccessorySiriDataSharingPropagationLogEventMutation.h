// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFHOMEACCESSORYSIRIDATASHARINGPROPAGATIONLOGEVENTMUTATION_H
#define _AFHOMEACCESSORYSIRIDATASHARINGPROPAGATIONLOGEVENTMUTATION_H

@class NSDate, NSString;
@protocol AFHomeAccessorySiriDataSharingPropagationLogEventMutating;

#import <Foundation/Foundation.h>

#import "AFHomeAccessorySiriDataSharingPropagationLogEvent.h"

@interface _AFHomeAccessorySiriDataSharingPropagationLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingPropagationLogEventMutating>

 {
    AFHomeAccessorySiriDataSharingPropagationLogEvent *_base;
    NSDate *_date;
    NSString *_accessoryIdentifier;
    NSInteger _propagationEvent;
    NSString *_propagationEventReason;
    NSString *_associatedChangeLogEventIdentifier;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getPropagationEvent;
-(id)getAccessoryIdentifier;
-(id)getAssociatedChangeLogEventIdentifier;
-(id)getDate;
-(id)getPropagationEventReason;
-(id)initWithBase:(id)arg0 ;
-(void)setAccessoryIdentifier:(id)arg0 ;
-(void)setAssociatedChangeLogEventIdentifier:(id)arg0 ;
-(void)setDate:(id)arg0 ;
-(void)setPropagationEvent:(NSInteger)arg0 ;
-(void)setPropagationEventReason:(id)arg0 ;


@end


#endif