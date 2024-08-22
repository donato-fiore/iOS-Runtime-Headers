// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPARTOFDAYNODECOLLECTION_H
#define PGGRAPHPARTOFDAYNODECOLLECTION_H

@class NSArray;


#import "PGGraphNodeCollection.h"

@interface PGGraphPartOfDayNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) NSArray *partsOfDay;


+(Class)nodeClass;
+(id)partOfDayNodeForPartOfDay:(NSUInteger)arg0 inGraph:(id)arg1 ;


@end


#endif