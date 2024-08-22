// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNPERSISTENTCHARTMEDIATOR_H
#define TNPERSISTENTCHARTMEDIATOR_H

@class TSCHPersistentChartMediator, NSString;
@protocol TSKDocumentObject, TSCECalculationEngineRegistration;



@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSKDocumentObject, TSCECalculationEngineRegistration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)registerLast;
-(id)formulaOwner;
-(id)nsFormulaOwnerUID;
-(id)objectToArchiveInDependencyTracker;
-(struct TSKUIDStruct )formulaOwnerUID;
-(unsigned short)ownerKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)registerWithCalcEngineForDocumentLoad:(id)arg0 ownerKind:(unsigned short)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)unregisterFromCalcEngine:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willModify;


@end


#endif