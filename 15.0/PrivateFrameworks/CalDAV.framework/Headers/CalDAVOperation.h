// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVOPERATION_H
#define CALDAVOPERATION_H

@class CoreDAVTaskGroup, NSMutableSet;
@protocol CalDAVPrincipal;



@interface CalDAVOperation : CoreDAVTaskGroup {
    BOOL _isCancellingTaskGroups;
}


@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups; // ivar: _outstandingTaskGroups
@property (retain, nonatomic) NSObject<CalDAVPrincipal> *principal; // ivar: _principal


-(id)init;
-(id)initWithPrincipal:(id)arg0 ;
-(void)_tearDownAllTaskGroupsWithBlock:(id)arg0 ;
-(void)bailWithError:(id)arg0 ;
-(void)cancelTaskGroup;
-(void)dealloc;


@end


#endif