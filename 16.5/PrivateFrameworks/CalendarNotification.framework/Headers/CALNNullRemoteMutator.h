// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNNULLREMOTEMUTATOR_H
#define CALNNULLREMOTEMUTATOR_H

@class NSString;
@protocol CALNRemoteMutator;

#import <Foundation/Foundation.h>


@interface CALNNullRemoteMutator : NSObject <CALNRemoteMutator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)deleteEvent:(id)arg0 withSpan:(NSInteger)arg1 ;
-(void)setParticipantStatus:(NSInteger)arg0 span:(NSInteger)arg1 event:(id)arg2 ;
-(void)setSnoozeTimeInterval:(CGFloat)arg0 alarm:(id)arg1 calendarItem:(id)arg2 ;


@end


#endif