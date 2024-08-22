// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUNODETOSTRINGMAP_H
#define VMUNODETOSTRINGMAP_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMUNodeToStringMap : NSObject <NSSecureCoding>

 {
    NSMutableArray *_strings;
    *void _stringToIndexMapVoidPtr;
    *void _nodeToStringIndexMapVoidPtr;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForNode:(unsigned int)arg0 ;
-(unsigned int)_indexForString:(id)arg0 ;
-(unsigned int)count;
-(unsigned int)uniquedStringCount;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateHexAddressesInStrings:(id)arg0 ;
-(void)resymbolicate__NSMallocBlock__StringsWithGraph:(id)arg0 ;
-(void)setString:(id)arg0 forNode:(unsigned int)arg1 ;


@end


#endif