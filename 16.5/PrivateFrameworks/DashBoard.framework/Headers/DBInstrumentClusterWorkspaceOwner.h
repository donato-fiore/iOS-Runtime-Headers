// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBINSTRUMENTCLUSTERWORKSPACEOWNER_H
#define DBINSTRUMENTCLUSTERWORKSPACEOWNER_H

@class NSString;
@protocol BSInvalidatable, DBEventHandling, DBWorkspaceOwner;

#import <Foundation/Foundation.h>

#import "DBWorkspace.h"

@interface DBInstrumentClusterWorkspaceOwner : NSObject <BSInvalidatable, DBEventHandling, DBWorkspaceOwner>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) DBWorkspace *workspace; // ivar: _workspace


-(NSUInteger)session:(id)arg0 policyForRequest:(id)arg1 ;
-(void)handleEvent:(id)arg0 ;
-(void)invalidate;
-(void)session:(id)arg0 handleStateChangeRequest:(id)arg1 ;
-(void)workspace:(id)arg0 didBeginStateChangeSession:(id)arg1 ;
-(void)workspace:(id)arg0 didEndStateChangeSession:(id)arg1 ;


@end


#endif