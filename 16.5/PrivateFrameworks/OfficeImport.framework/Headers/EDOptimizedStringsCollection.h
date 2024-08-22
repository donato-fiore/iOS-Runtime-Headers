// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDOPTIMIZEDSTRINGSCOLLECTION_H
#define EDOPTIMIZEDSTRINGSCOLLECTION_H

@class NSMutableDictionary;


#import "EDCollection.h"

@interface EDOptimizedStringsCollection : EDCollection {
    NSMutableDictionary *mStringDictionary;
}




-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)addOrEquivalentObject:(id)arg0 ;
-(id)init;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif