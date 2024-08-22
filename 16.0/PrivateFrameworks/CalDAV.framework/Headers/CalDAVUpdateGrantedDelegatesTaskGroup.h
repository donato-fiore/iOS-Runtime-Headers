// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVUPDATEGRANTEDDELEGATESTASKGROUP_H
#define CALDAVUPDATEGRANTEDDELEGATESTASKGROUP_H

@class CoreDAVTaskGroup, NSSet, NSString;
@protocol CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate;


#import "CalDAVGetGrantedDelegatesTaskGroup.h"

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>



@property (retain, nonatomic) NSSet *addReadURLs; // ivar: _addReadURLs
@property (retain, nonatomic) NSSet *addWriteURLs; // ivar: _addWriteURLs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CalDAVGetGrantedDelegatesTaskGroup *getGrantedDelegatesTaskGroup; // ivar: _getGrantedDelegatesTaskGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *removeURLs; // ivar: _removeURLs
@property (nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *updatedReadURLs; // ivar: _updatedReadURLs
@property (retain, nonatomic) NSSet *updatedWriteURLs; // ivar: _updatedWriteURLs


-(id)initWithAccountInfoProvider:(id)arg0 addWriteURLs:(id)arg1 addReadURLs:(id)arg2 removeURLs:(id)arg3 taskManager:(id)arg4 ;
-(void)_fetchExistingGrantedDelegates;
-(void)_finishWithError:(id)arg0 state:(int)arg1 ;
-(void)_populateUpdatesFromFetched:(id)arg0 allowWrite:(BOOL)arg1 ;
-(void)_updateDelegatesWithAllowWrite:(BOOL)arg0 ;
-(void)propPatchTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif