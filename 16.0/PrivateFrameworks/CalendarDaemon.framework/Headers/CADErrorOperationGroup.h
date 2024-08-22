// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADERROROPERATIONGROUP_H
#define CADERROROPERATIONGROUP_H

@class NSString;
@protocol CADErrorInterface;


#import "CADOperationGroup.h"

@interface CADErrorOperationGroup : CADOperationGroup <CADErrorInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresEventAccess;
-(void)CADDatabaseGetErrorCount:(id)arg0 ;
-(void)CADDatabaseGetEventsWithErrorsPerSource:(id)arg0 ;


@end


#endif