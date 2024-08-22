// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICORESYMPTOMSREPORTER_H
#define SIRICORESYMPTOMSREPORTER_H


#import <Foundation/Foundation.h>


@interface SiriCoreSymptomsReporter : NSObject



+(id)sharedInstance;
-(id)_processNameForPid:(int)arg0 ;
-(id)_subtypeContextStringFromContext:(id)arg0 ;
-(void)_getTypeForError:(id)arg0 completion:(id)arg1 ;
-(void)reportIssueForError:(id)arg0 type:(NSInteger)arg1 context:(id)arg2 processIdentifier:(int)arg3 walkboutStatus:(BOOL)arg4 triggerForIDSIdentifiers:(id)arg5 ;
-(void)reportIssueForError:(id)arg0 type:(NSInteger)arg1 subtype:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 triggerForIDSIdentifiers:(id)arg6 ;
-(void)reportIssueForError:(id)arg0 type:(NSInteger)arg1 subtype:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 triggerForIDSIdentifiers:(id)arg6 withPcap:(BOOL)arg7 ;
-(void)reportIssueForType:(id)arg0 subType:(id)arg1 context:(id)arg2 processIdentifier:(int)arg3 walkboutStatus:(BOOL)arg4 ;
-(void)reportIssueForType:(id)arg0 subType:(id)arg1 context:(id)arg2 processIdentifier:(int)arg3 walkboutStatus:(BOOL)arg4 withPcap:(BOOL)arg5 ;


@end


#endif