// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCOUNTABLETEXTRANGE_H
#define NSCOUNTABLETEXTRANGE_H

@class NSString;


#import "NSTextRange.h"
#import "NSCountableTextLocation.h"

@interface NSCountableTextRange : NSTextRange

@property (readonly) NSCountableTextLocation *endLocation;
@property (readonly, getter=isEndingAtEOD) BOOL endingAtEOD;
@property (readonly) NSCountableTextLocation *location;
@property (readonly) _NSRange range; // ivar: _range
@property (readonly, copy) NSString *type;


+(BOOL)isBaseClassTestingMode;
+(id)documentRange;
+(void)setBaseClassTestingMode:(BOOL)arg0 ;
-(BOOL)containsLocation:(id)arg0 ;
-(BOOL)intersectsWithTextRange:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToTextRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)initWithLocation:(id)arg0 endLocation:(id)arg1 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)textRangeByFormingUnionWithTextRange:(id)arg0 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg0 ;


@end


#endif