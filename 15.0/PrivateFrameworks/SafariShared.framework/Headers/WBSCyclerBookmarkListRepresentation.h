// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCYCLERBOOKMARKLISTREPRESENTATION_H
#define WBSCYCLERBOOKMARKLISTREPRESENTATION_H

@class NSMutableArray;
@protocol NSFastEnumeration;


#import "WBSCyclerBookmarkRepresentation.h"

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration>

 {
    NSMutableArray *_children;
}


@property (readonly, nonatomic) NSUInteger numberOfChildren;


+(BOOL)supportsSecureCoding;
-(BOOL)_tryToDeleteDescendant:(id)arg0 ;
-(BOOL)containsChild:(id)arg0 ;
-(BOOL)containsDescendant:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allDescendantsPassingTest:(id)arg0 ;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descendantWithUniqueIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg0 ;
-(id)randomDescendant;
-(id)randomDescendantPassingTest:(id)arg0 ;
-(id)randomListDescendant;
-(void)addChild:(id)arg0 ;
-(void)deleteAllChildren;
-(void)deleteChild:(id)arg0 ;
-(void)deleteDescendant:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif