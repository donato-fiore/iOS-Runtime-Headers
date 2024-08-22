// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPPAGEREP_H
#define TSWPPAGEREP_H

@class TSDContainerRep, NSString;
@protocol CALayerDelegate;



@interface TSWPPageRep : TSDContainerRep <CALayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)updateFromLayout;


@end


#endif