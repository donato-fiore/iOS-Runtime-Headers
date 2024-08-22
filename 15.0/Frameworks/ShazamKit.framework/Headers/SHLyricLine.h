// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLYRICLINE_H
#define SHLYRICLINE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SHLyricLine : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat offset; // ivar: _offset
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(id)lyricLineWithText:(id)arg0 offset:(CGFloat)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLineWithText:(id)arg0 offset:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif