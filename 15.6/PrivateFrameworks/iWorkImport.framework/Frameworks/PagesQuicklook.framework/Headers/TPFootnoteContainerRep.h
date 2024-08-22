// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPFOOTNOTECONTAINERREP_H
#define TPFOOTNOTECONTAINERREP_H

@class TSDContainerRep, NSString;
@protocol TSWPRepParent, TSDContainerInfo;



@interface TPFootnoteContainerRep : TSDContainerRep <TSWPRepParent>



@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)directlyManagesLayerContent;
-(BOOL)p_hasContent;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif