// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICARDSECTIONCREATOR_H
#define SEARCHUICARDSECTIONCREATOR_H


#import <Foundation/Foundation.h>


@interface SearchUICardSectionCreator : NSObject



+(Class)viewClassForCardSection:(id)arg0 horizontal:(BOOL)arg1 ;
+(id)cardSectionViewForModel:(id)arg0 feedbackDelegate:(id)arg1 ;
+(id)viewsForCardSections:(id)arg0 isInline:(BOOL)arg1 feedbackDelegate:(id)arg2 ;


@end


#endif