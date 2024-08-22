// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARDDAVUPDATEMECARDTASKGROUP_H
#define CARDDAVUPDATEMECARDTASKGROUP_H

@class NSURL, NSString;
@protocol CoreDAVPropPatchTaskDelegate;


#import "CoreDAVTaskGroup.h"

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>



@property (readonly, nonatomic) NSURL *cardURL; // ivar: _cardURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *homeURL; // ivar: _homeURL
@property (readonly) Class superclass;


-(id)_newPropPatchTask;
-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 homeURL:(id)arg2 cardURL:(id)arg3 ;
-(void)propPatchTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;


@end


#endif