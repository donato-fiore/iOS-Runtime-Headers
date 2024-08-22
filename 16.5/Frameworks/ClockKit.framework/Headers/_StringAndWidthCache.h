// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _STRINGANDWIDTHCACHE_H
#define _STRINGANDWIDTHCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _StringAndWidthCache : NSObject {
    NSMutableArray *_attributedStrings;
    NSMutableArray *_boxedSizes;
}




-(NSUInteger)attributedStringCount;
-(id)attributedStringAndSize:(struct CGSize *)arg0 forMaxWidth:(CGFloat)arg1 ;
-(id)attributedStringForIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)smallestAttributedStringAndSize:(struct CGSize *)arg0 ;
-(void)addAttributedString:(id)arg0 withSize:(struct CGSize )arg1 ;


@end


#endif