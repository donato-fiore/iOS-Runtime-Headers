// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTSELECTION_H
#define NSTEXTSELECTION_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding, NSTextLocation;

#import <Foundation/Foundation.h>


@interface NSTextSelection : NSObject <NSSecureCoding>



@property (readonly) NSInteger affinity; // ivar: _affinity
@property CGFloat anchorPositionOffset; // ivar: _anchorPositionOffset
@property (readonly) NSInteger granularity; // ivar: _granularity
@property (getter=isLogical) BOOL logical; // ivar: _logical
@property (retain) NSObject<NSTextLocation> *secondarySelectionLocation; // ivar: _secondarySelectionLocation
@property (retain) NSObject<NSTextLocation> *selectionAnchorLocation; // ivar: _selectionAnchorLocation
@property (readonly, copy) NSArray *textRanges; // ivar: _textRanges
@property (getter=isTransient) BOOL transient; // ivar: _transient
@property (copy) NSDictionary *typingAttributes; // ivar: _typingAttributes


+(BOOL)supportsSecureCoding;
+(id)descriptionForAffinity:(NSInteger)arg0 ;
+(id)descriptionForGranularity:(NSInteger)arg0 ;
-(BOOL)containsLocation:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 affinity:(NSInteger)arg1 ;
-(id)initWithRange:(id)arg0 affinity:(NSInteger)arg1 granularity:(NSInteger)arg2 ;
-(id)initWithRanges:(id)arg0 affinity:(NSInteger)arg1 granularity:(NSInteger)arg2 ;
-(id)textRangeContainingLocation:(id)arg0 ;
-(id)textSelectionWithTextRanges:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif