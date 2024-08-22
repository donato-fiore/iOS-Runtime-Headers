// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNNOTEREP_H
#define KNNOTEREP_H

@class TSDRep, TSWPRep, NSString;
@protocol TSWPRepParent, TSDContainerRep, TSWPStorageObserver, TSDContainerInfo;



@interface KNNoteRep : TSDRep <TSWPRepParent, TSDContainerRep, TSWPStorageObserver>



@property (readonly, nonatomic) TSWPRep *containedRep; // ivar: _containedRep
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg0 ;
-(BOOL)shouldShowCollaboratorCursorHighlight;
-(CGFloat)columnHeight;
-(id)childReps;
-(id)editingRep;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(void)dealloc;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(NSUInteger)arg3 ;
-(void)updateChildrenFromLayout;
-(void)willBeginEditingContainedInfo:(id)arg0 ;
-(void)willEndEditingContainedInfo:(id)arg0 ;


@end


#endif