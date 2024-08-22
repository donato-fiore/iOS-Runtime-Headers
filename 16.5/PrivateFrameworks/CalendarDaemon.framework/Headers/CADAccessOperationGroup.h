// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADACCESSOPERATIONGROUP_H
#define CADACCESSOPERATIONGROUP_H

@protocol CADAccessInterface;


#import "CADOperationGroup.h"

@interface CADAccessOperationGroup : CADOperationGroup <CADAccessInterface>





+(BOOL)requiresEventAccess;
-(void)CADDatabaseGetAccess:(id)arg0 ;
-(void)CADDatabaseResetWithReply:(id)arg0 ;
-(void)CADDatabaseSetInitializationOptions:(id)arg0 reply:(id)arg1 ;


@end


#endif