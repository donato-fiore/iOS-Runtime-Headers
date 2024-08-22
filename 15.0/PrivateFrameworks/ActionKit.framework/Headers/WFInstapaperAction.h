// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINSTAPAPERACTION_H
#define WFINSTAPAPERACTION_H

@class WFAction, NSArray, NSString, NSMutableArray;
@protocol WFDynamicEnumerationDataSource, IKEngineDelegate;


#import "IKEngine.h"

@interface WFInstapaperAction : WFAction <WFDynamicEnumerationDataSource, IKEngineDelegate>



@property (readonly, nonatomic) NSArray *connectionTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IKEngine *engine; // ivar: _engine
@property (nonatomic) BOOL hasFetchedFolders; // ivar: _hasFetchedFolders
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) BOOL includeSpecialFolders;
@property (readonly) Class superclass;


-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)folders;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(void)dealloc;
-(void)engine:(id)arg0 connection:(id)arg1 didReceiveFolders:(id)arg2 ;
-(void)engine:(id)arg0 didFailConnection:(id)arg1 error:(id)arg2 ;
-(void)engine:(id)arg0 didFinishConnection:(id)arg1 ;
-(void)engine:(id)arg0 willStartConnection:(id)arg1 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 selectedFolder:(id)arg1 ;
-(void)updateFolders;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif