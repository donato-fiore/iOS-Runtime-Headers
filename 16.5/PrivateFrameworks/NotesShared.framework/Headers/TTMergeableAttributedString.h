// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTMERGEABLEATTRIBUTEDSTRING_H
#define TTMERGEABLEATTRIBUTEDSTRING_H

@class NSString, NSArray, NSAttributedString;
@protocol CRCoding;


#import "TTMergeableUndoString.h"

@interface TTMergeableAttributedString : TTMergeableUndoString <CRCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *edits;
@property (retain, nonatomic) NSAttributedString *editsAttributedString; // ivar: _editsAttributedString
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)writingDirectionForAttribute:(int)arg0 ;
+(id)allowedAttributesForModel;
+(id)allowedAttributesForStyle;
+(id)allowedTypingAttributes;
+(id)attributesForRun:(*void)arg0 ;
+(int)attributeForWritingDirection:(NSInteger)arg0 ;
+(void)saveAttributes:(id)arg0 toArchive:(*void)arg1 ;
+(void)saveAttributesOfString:(id)arg0 toArchive:(*void)arg1 ;
-(BOOL)attributesEqual:(id)arg0 to:(id)arg1 modelEqual:(*BOOL)arg2 ;
-(BOOL)attributesEqual:(id)arg0 toRange:(struct _NSRange )arg1 modelEqual:(*BOOL)arg2 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)editAtIndex:(NSUInteger)arg0 ;
-(id)editsInRange:(struct _NSRange )arg0 ;
-(id)initWithArchive:(*void)arg0 replicaID:(id)arg1 orderedSubstrings:(*void)arg2 timestamp:(id)arg3 fragment:(BOOL)arg4 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 string:(*void)arg1 ;
-(id)serialize;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 string:(*void)arg1 ;
-(void)enumerateEditsInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeTimestampsForReplicaID:(id)arg0 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)saveDeltaSinceTimestamp:(id)arg0 toArchive:(*void)arg1 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)setAttributes:(id)arg0 substring:(*void)arg1 ;
-(void)setTimestamp:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)updateCache;


@end


#endif