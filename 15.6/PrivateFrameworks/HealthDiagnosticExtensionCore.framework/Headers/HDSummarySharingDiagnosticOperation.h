// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSUMMARYSHARINGDIAGNOSTICOPERATION_H
#define HDSUMMARYSHARINGDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDSummarySharingDiagnosticOperation : HDDiagnosticOperation



-(id)reportFilename;
-(void)_reportDiagnosticsForProfileIdentifier:(id)arg0 ;
-(void)_reportHeaderWithProfileIdentifiers:(id)arg0 ;
-(void)_reportInvitationsForPrimaryProfile;
-(void)_reportProfileInformationForProfileIdentifier:(id)arg0 ;
-(void)_reportSharedSummariesForProfileIdentifier:(id)arg0 ;
-(void)run;


@end


#endif