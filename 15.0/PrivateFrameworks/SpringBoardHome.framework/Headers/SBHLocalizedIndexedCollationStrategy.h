// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHLOCALIZEDINDEXEDCOLLATIONSTRATEGY_H
#define SBHLOCALIZEDINDEXEDCOLLATIONSTRATEGY_H

@class NSArray, UILocalizedIndexedCollation, NSString;
@protocol SBHLocalizedIndexedCollation;

#import <Foundation/Foundation.h>


@interface SBHLocalizedIndexedCollationStrategy : NSObject <SBHLocalizedIndexedCollation>

 {
    NSArray *_cachedSectionTitles;
    NSArray *_cachedSectionIndexTitles;
    NSArray *_appendedSections;
    UILocalizedIndexedCollation *_currentCollation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic) NSArray *sectionTitles;
@property (readonly) Class superclass;


+(id)defaultCollationStrategy;
+(id)defaultSectionIndexTitles;
+(id)defaultSectionTitles;
+(id)dimSumCollationStrategy;
+(id)myCurrentCollation;
+(void)prewarm;
-(BOOL)containsSection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)sectionForObject:(id)arg0 collationStringSelector:(SEL)arg1 ;
-(NSInteger)sectionForSectionIndexTitleAtIndex:(NSInteger)arg0 ;
-(id)appendedSectionTitles;
-(id)initWithAdditionalSections:(id)arg0 ;
-(id)sortedArrayFromArray:(id)arg0 collationStringSelector:(SEL)arg1 ;


@end


#endif