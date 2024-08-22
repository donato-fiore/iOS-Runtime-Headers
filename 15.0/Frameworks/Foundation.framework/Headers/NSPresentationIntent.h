// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPRESENTATIONINTENT_H
#define NSPRESENTATIONINTENT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSPresentationIntent.h"

@interface NSPresentationIntent : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger column; // ivar: _column
@property (readonly) NSArray *columnAlignments; // ivar: _columnAlignments
@property (readonly) NSInteger columnCount; // ivar: _columnCount
@property (readonly) NSInteger headerLevel; // ivar: _headerLevel
@property (readonly) NSInteger identity; // ivar: _identity
@property (readonly) NSInteger indentationLevel; // ivar: _indentationLevel
@property (readonly) NSInteger intentKind; // ivar: _intentKind
@property (readonly, copy) NSString *languageHint; // ivar: _languageHint
@property (readonly) NSInteger ordinal; // ivar: _ordinal
@property (readonly) NSPresentationIntent *parentIntent; // ivar: _parentIntent
@property (readonly) NSInteger row; // ivar: _row


+(BOOL)supportsSecureCoding;
+(id)blockQuoteIntentWithIdentity:(NSInteger)arg0 nestedInsideIntent:(id)arg1 ;
+(id)codeBlockIntentWithIdentity:(NSInteger)arg0 languageHint:(id)arg1 nestedInsideIntent:(id)arg2 ;
+(id)headerIntentWithIdentity:(NSInteger)arg0 level:(NSInteger)arg1 nestedInsideIntent:(id)arg2 ;
+(id)listItemIntentWithIdentity:(NSInteger)arg0 ordinal:(NSInteger)arg1 nestedInsideIntent:(id)arg2 ;
+(id)orderedListIntentWithIdentity:(NSInteger)arg0 nestedInsideIntent:(id)arg1 ;
+(id)paragraphIntentWithIdentity:(NSInteger)arg0 nestedInsideIntent:(id)arg1 ;
+(id)tableCellIntentWithIdentity:(NSInteger)arg0 column:(NSInteger)arg1 nestedInsideIntent:(id)arg2 ;
+(id)tableHeaderRowIntentWithIdentity:(NSInteger)arg0 nestedInsideIntent:(id)arg1 ;
+(id)tableIntentWithIdentity:(NSInteger)arg0 columnCount:(NSInteger)arg1 alignments:(id)arg2 nestedInsideIntent:(id)arg3 ;
+(id)tableRowIntentWithIdentity:(NSInteger)arg0 row:(NSInteger)arg1 nestedInsideIntent:(id)arg2 ;
+(id)thematicBreakIntentWithIdentity:(NSInteger)arg0 nestedInsideIntent:(id)arg1 ;
+(id)unorderedListIntentWithIdentity:(NSInteger)arg0 nestedInsideIntent:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToPresentationIntent:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif