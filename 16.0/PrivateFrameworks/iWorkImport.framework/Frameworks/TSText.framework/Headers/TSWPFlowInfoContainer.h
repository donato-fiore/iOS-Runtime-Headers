// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFLOWINFOCONTAINER_H
#define TSWPFLOWINFOCONTAINER_H

@class TSPObject, NSString, NSMutableArray;
@protocol TSWPFlowInfoContainer;



@interface TSWPFlowInfoContainer : TSPObject <TSWPFlowInfoContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *flowInfos; // ivar: _flowInfos
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger nextUserInterfaceIdentifier; // ivar: _nextUserInterfaceIdentifier
@property (readonly) Class superclass;


-(BOOL)containsFlowInfo:(id)arg0 ;
-(id)childEnumerator;
-(id)initWithContext:(id)arg0 ;
-(void)addFlowInfo:(id)arg0 ;
-(void)addFlowInfo:(id)arg0 dolcContext:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeFlowInfo:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif