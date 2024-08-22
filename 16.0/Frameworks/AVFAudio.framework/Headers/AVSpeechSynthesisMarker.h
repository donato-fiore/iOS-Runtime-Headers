// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSPEECHSYNTHESISMARKER_H
#define AVSPEECHSYNTHESISMARKER_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AVSpeechSynthesisMarker : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger byteSampleOffset; // ivar: _byteSampleOffset
@property (nonatomic) NSInteger mark; // ivar: _mark
@property (nonatomic) _NSRange textRange; // ivar: _textRange


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMarkerType:(NSInteger)arg0 forTextRange:(struct _NSRange )arg1 atByteSampleOffset:(NSUInteger)arg2 ;
-(id)initWithMarkerType:(NSInteger)arg0 name:(id)arg1 forTextRange:(struct _NSRange )arg2 atByteSampleOffset:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif