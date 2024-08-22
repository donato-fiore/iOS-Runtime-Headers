// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPINGSESSIONALIGNED_H
#define TITYPINGSESSIONALIGNED_H

@class NSArray, NSString, NSLocale;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIWordEntryAligned.h"

@interface TITypingSessionAligned : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *alignedEntries; // ivar: _alignedEntries
@property (retain, nonatomic) NSString *alignedText; // ivar: _alignedText
@property (readonly, nonatomic) NSString *completeText; // ivar: _completeText
@property (nonatomic) BOOL containsCPEntries; // ivar: _containsCPEntries
@property (nonatomic) NSUInteger firstCPEntryIndex; // ivar: _firstCPEntryIndex
@property (retain, nonatomic) NSString *highConfAlignedSubSegment; // ivar: _highConfAlignedSubSegment
@property (readonly, nonatomic) NSArray *layouts; // ivar: _layouts
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly, nonatomic) TIWordEntryAligned *unfinishedEntry; // ivar: _unfinishedEntry


+(BOOL)supportsSecureCoding;
+(id)alignedEntryForWord:(id)arg0 ;
+(id)alignedPathTouchesForWord:(id)arg0 ;
+(id)completeStringFromWordEntry:(id)arg0 leadingInputs:(id)arg1 trailingInputs:(id)arg2 followsContinuousPath:(BOOL)arg3 ;
+(id)resolveBackspacesInKeyboardInputs:(id)arg0 ;
-(BOOL)compareForConfidenceContextA:(id)arg0 contextB:(id)arg1 ;
-(BOOL)isNewLineScenarioWithCurrentWord:(id)arg0 andPreviousWord:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(id)restrictedAlignedSessionWithWordLimit:(NSUInteger)arg0 ;
-(id)textToAppendForEntry:(id)arg0 sessionIndx:(NSUInteger)arg1 ;
-(void)computeAlignedWordsFromSession:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getAlignedTextAndConfidence;


@end


#endif