// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSATTRIBUTEDSTRINGMARKDOWNSOURCEPOSITION_H
#define NSATTRIBUTEDSTRINGMARKDOWNSOURCEPOSITION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSAttributedStringMarkdownSourcePosition : NSObject <NSCopying, NSSecureCoding>

 {
    ? _startOffsets;
    ? _endOffsets;
}


@property (readonly) NSInteger endColumn;
@property (readonly) NSInteger endLine;
@property (readonly) NSInteger startColumn;
@property (readonly) NSInteger startLine;


+(BOOL)supportsSecureCoding;
+(struct ? )calculateOffsetsForLine:(NSInteger)arg0 column:(NSInteger)arg1 inString:(char *)arg2 withExistingOffsets:(struct ? )arg3 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStart:(struct ? )arg0 end:(struct ? )arg1 ;
-(id)initWithStartLine:(NSInteger)arg0 startColumn:(NSInteger)arg1 endLine:(NSInteger)arg2 endColumn:(NSInteger)arg3 ;
-(struct ? )endOffsets;
-(struct ? )startOffsets;
-(struct _NSRange )rangeInString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOffsetsFromUTF8:(char *)arg0 usingCache:(struct ? *)arg1 ;


@end


#endif