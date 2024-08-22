// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCONCEPTSELECTION_H
#define HKCONCEPTSELECTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKConceptSelection : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)andSelectionWithSubselections:(id)arg0 ;
+(id)notSelectionWithSubselections:(id)arg0 ;
+(id)orSelectionWithSubselections:(id)arg0 ;
+(id)selectionForAllNodes;
+(id)selectionForNoNodes;
+(id)selectionForNodeWithIdentifier:(id)arg0 ;
+(id)selectionForNodesWithAttribute:(NSInteger)arg0 likeStringValue:(id)arg1 ;
+(id)selectionForNodesWithAttribute:(NSInteger)arg0 stringValue:(id)arg1 ;
+(id)selectionForNodesWithAttribute:(NSInteger)arg0 value:(id)arg1 ;
+(id)selectionForNodesWithCoding:(id)arg0 ;
+(id)selectionForObjectsWithRelationship:(NSInteger)arg0 fromSubjectSelection:(id)arg1 ;
+(id)selectionForObjectsWithRelationshipFromSubjectSelection:(id)arg0 ;
+(id)selectionForSubjectsWithRelationship:(NSInteger)arg0 toObjectSelection:(id)arg1 ;
+(id)selectionForSubjectsWithRelationshipToObjectSelection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif