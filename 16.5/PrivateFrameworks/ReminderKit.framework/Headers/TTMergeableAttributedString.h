// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTMERGEABLEATTRIBUTEDSTRING_H
#define TTMERGEABLEATTRIBUTEDSTRING_H

@class NSString;
@protocol CRCoding;


#import "TTMergeableUndoString.h"

@interface TTMergeableAttributedString : TTMergeableUndoString <CRCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)writingDirectionForAttribute:(int)arg0 ;
+(id)allowlistedAttributesForModel;
+(id)allowlistedAttributesForStyle;
+(id)allowlistedTypingAttributes;
+(id)attributesForRun:(*void)arg0 ;
+(int)attributeForWritingDirection:(NSInteger)arg0 ;
+(void)saveAttributes:(id)arg0 toArchive:(*void)arg1 ;
+(void)saveAttributesOfString:(id)arg0 toArchive:(*void)arg1 ;
-(BOOL)attributesEqual:(id)arg0 to:(id)arg1 modelEqual:(*BOOL)arg2 ;
-(BOOL)attributesEqual:(id)arg0 toRange:(struct _NSRange )arg1 modelEqual:(*BOOL)arg2 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)initWithArchive:(*void)arg0 andReplicaID:(id)arg1 withOrderedSubstrings:(*void)arg2 timestamp:(id)arg3 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 string:(*void)arg1 ;
-(id)serialize;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 string:(*void)arg1 ;
-(void)insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)saveDeltaSinceTimestamp:(id)arg0 toArchive:(*void)arg1 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)setAttributes:(id)arg0 substring:(*void)arg1 ;


@end


#endif