// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVGETDELEGATESBASETASKGROUP_H
#define CALDAVGETDELEGATESBASETASKGROUP_H

@class CoreDAVTaskGroup, NSString, NSURL, NSMutableSet, NSSet, NSMutableArray;
@protocol CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate;


#import "CalDAVGetPrincipalEmailDetailsTaskGroup.h"

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CalDAVGetPrincipalEmailDetailsTaskGroup *getPrincipalEmailDetailsTaskGroup; // ivar: _getPrincipalEmailDetailsTaskGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *principalURL; // ivar: _principalURL
@property (retain, nonatomic) NSMutableSet *readDetails; // ivar: _readDetails
@property (readonly, retain, nonatomic) NSSet *readOnlyPrincipalDetails;
@property (retain, nonatomic) NSMutableArray *readPrincipalURLs; // ivar: _readPrincipalURLs
@property (readonly, retain, nonatomic) NSSet *readWritePrincipalDetails;
@property (nonatomic) BOOL serverSupportsExpandPropertyReport; // ivar: _serverSupportsExpandPropertyReport
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *writeDetails; // ivar: _writeDetails
@property (retain, nonatomic) NSMutableArray *writePrincipalURLs; // ivar: _writePrincipalURLs


-(id)_mappingsForPrincipalDetails;
-(id)_popFromArray:(id)arg0 ;
-(id)initWithAccountInfoProvider:(id)arg0 principalURL:(id)arg1 taskManager:(id)arg2 ;
-(void)_getPrincipalDetailsForURL:(id)arg0 ;
-(void)_processDetailsFromMultiStatus:(id)arg0 allowWrite:(BOOL)arg1 ;
-(void)bailWithError:(id)arg0 ;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroup:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif