// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACDISAMBIGUATIONHANDLER_H
#define CACDISAMBIGUATIONHANDLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CACDisambiguationHandler : NSObject

@property (copy, nonatomic) id *chosenLabeledElementHandler; // ivar: _chosenLabeledElementHandler
@property (retain) NSArray *labeledElements; // ivar: _labeledElements


-(id)initWithLabeledElements:(id)arg0 ;
-(void)handleChosenLabeledElement:(id)arg0 ;


@end


#endif