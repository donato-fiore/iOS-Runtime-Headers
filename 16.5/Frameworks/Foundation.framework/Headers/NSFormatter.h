// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFORMATTER_H
#define NSFORMATTER_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface NSFormatter : NSObject <NSCopying, NSCoding>





-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg0 ;
-(BOOL)_tracksCacheGenerationCount;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 range:(struct _NSRange *)arg2 error:(*id)arg3 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(NSInteger)_cacheGenerationCount;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)editingStringForObjectValue:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(void)_invalidateCache;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif