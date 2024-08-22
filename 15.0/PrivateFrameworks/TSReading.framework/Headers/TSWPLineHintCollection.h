// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPLINEHINTCOLLECTION_H
#define TSWPLINEHINTCOLLECTION_H



#import "TSPObject.h"
#import "TSWPLineHintCollection.h"

@interface TSWPLineHintCollection : TSPObject {
    *? mHints;
    TSWPLineHintCollection *mContainingCollection;
}


@property (readonly, nonatomic) BOOL hasColumnIndices; // ivar: mHasColumnIndices
@property (readonly, nonatomic) *? hints;
@property (readonly, nonatomic) NSUInteger hintsCount; // ivar: mHintsCount
@property (readonly, nonatomic) BOOL valid; // ivar: mValid


-(BOOL)checkSubCollectionRange:(struct _NSRange )arg0 ;
-(NSUInteger)p_columnIndexForHintIndex:(NSUInteger)arg0 ;
-(id)descriptionWithStorage:(id)arg0 ;
-(id)initWithContainingCollection:(id)arg0 range:(struct _NSRange )arg1 context:(id)arg2 ;
-(id)newSubCollectionWithRange:(struct _NSRange )arg0 ;
-(struct _NSRange )hintRangeForColumnIndex:(NSUInteger)arg0 frameBounds:(struct CGRect )arg1 charIndex:(NSUInteger)arg2 ;
-(struct _NSRange )hintRangeForLineStartingAtHintIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif