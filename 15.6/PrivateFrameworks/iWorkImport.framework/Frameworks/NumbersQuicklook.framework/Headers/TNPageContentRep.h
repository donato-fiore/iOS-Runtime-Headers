// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNPAGECONTENTREP_H
#define TNPAGECONTENTREP_H

@class TSDContainerRep, NSString;
@protocol TSKChangeSourceObserver;



@interface TNPageContentRep : TSDContainerRep <TSKChangeSourceObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)directlyManagesLayerContent;
-(BOOL)isOpaque;
-(BOOL)masksToBounds;
-(Class)layerClass;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)pageController;
-(void)processChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)willBeRemoved;


@end


#endif