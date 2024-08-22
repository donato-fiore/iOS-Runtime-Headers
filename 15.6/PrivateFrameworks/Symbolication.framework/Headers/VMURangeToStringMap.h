// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMURANGETOSTRINGMAP_H
#define VMURANGETOSTRINGMAP_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMURangeToStringMap : NSObject <NSSecureCoding>

 {
    NSMutableArray *_strings;
    *void _stringToIndexMapVoidPtr;
    *void _rangeAndStringVectorVoidPtr;
    BOOL _sorted;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForAddress:(NSUInteger)arg0 ;
-(id)stringForIndex:(unsigned int)arg0 ;
-(struct _VMURange )rangeContainingAddress:(NSUInteger)arg0 ;
-(struct _VMURange )rangeForString:(id)arg0 startingAtAddress:(NSUInteger)arg1 ;
-(unsigned int)count;
-(unsigned int)indexForString:(id)arg0 insertIfMissing:(BOOL)arg1 ;
-(unsigned int)uniquedStringCount;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateHexAddressesInStrings:(id)arg0 ;
-(void)enumerateRanges:(id)arg0 ;
-(void)resymbolicateStringsWithSymbolicator:(struct _CSTypeRef )arg0 ;
-(void)setString:(id)arg0 forRange:(struct _VMURange )arg1 ;
-(void)sort;


@end


#endif