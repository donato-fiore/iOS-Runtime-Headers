// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSPEECHSYNTHESISMARKER_H
#define AVSPEECHSYNTHESISMARKER_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AVSpeechSynthesisMarker : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger byteSampleOffset; // ivar: _byteSampleOffset
@property (nonatomic) NSUInteger mark; // ivar: _mark
@property (nonatomic) _NSRange textRange; // ivar: _textRange


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMarkerType:(NSUInteger)arg0 forTextRange:(struct _NSRange )arg1 atByteSampleOffset:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif