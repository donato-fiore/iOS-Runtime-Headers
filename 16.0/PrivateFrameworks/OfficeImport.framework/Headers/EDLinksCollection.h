// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDLINKSCOLLECTION_H
#define EDLINKSCOLLECTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface EDLinksCollection : NSObject {
    NSMutableArray *mLinks;
    NSMutableArray *mReferences;
}




-(BOOL)convertLinkReferenceIndex:(NSUInteger)arg0 firstSheetIndex:(*NSUInteger)arg1 lastSheetIndex:(*NSUInteger)arg2 ;
-(NSUInteger)addLink:(id)arg0 ;
-(NSUInteger)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(NSUInteger)arg0 lastSheetIndex:(NSUInteger)arg1 ;
-(NSUInteger)addOrEquivalentLinkReferenceOfType:(int)arg0 firstSheetIndex:(NSUInteger)arg1 lastSheetIndex:(NSUInteger)arg2 ;
-(NSUInteger)addReference:(id)arg0 ;
-(NSUInteger)indexOfFirstLinkWithType:(int)arg0 ;
-(NSUInteger)indexOfReference:(id)arg0 ;
-(NSUInteger)linkIndexCreateIfNeededWithType:(int)arg0 ;
-(NSUInteger)linksCount;
-(NSUInteger)referencesCount;
-(id)description;
-(id)init;
-(id)linkAtIndex:(NSUInteger)arg0 ;
-(id)referenceAtIndex:(NSUInteger)arg0 ;
-(void)addOrEquivalentExternalAddInName:(id)arg0 linkReferenceIndex:(*NSUInteger)arg1 nameIndex:(*NSUInteger)arg2 ;


@end


#endif