// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXARRAYDATASECTION_H
#define PXARRAYDATASECTION_H

@class NSArray;


#import "PXDataSection.h"

@interface PXArrayDataSection : PXDataSection

@property (readonly, copy, nonatomic) NSArray *sectionContent; // ivar: _sectionContent


-(NSInteger)count;
-(NSInteger)indexOfObject:(id)arg0 ;
-(NSInteger)validatedIndexOfObject:(id)arg0 hintIndex:(NSInteger)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithOutlineObject:(id)arg0 ;
-(id)initWithOutlineObject:(id)arg0 sectionContent:(id)arg1 ;
-(id)initWithSectionContent:(id)arg0 ;
-(id)objectAtIndex:(NSInteger)arg0 ;


@end


#endif