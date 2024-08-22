// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETERESULTSTABLEVIEWMODEL_H
#define _CNAUTOCOMPLETERESULTSTABLEVIEWMODEL_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteResultsTableViewModel : NSObject {
    NSMutableDictionary *_sections;
}


@property (readonly, nonatomic) NSUInteger numberOfNonEmptySections;
@property (nonatomic) NSUInteger numberOfSections; // ivar: _numberOfSections


-(id)computeDiffForModel:(id)arg0 ;
-(id)initWithNumberOfSections:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(void)enumerateSections:(id)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setSection:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif