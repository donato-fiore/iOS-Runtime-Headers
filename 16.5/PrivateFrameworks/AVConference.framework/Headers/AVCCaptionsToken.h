// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCCAPTIONSTOKEN_H
#define AVCCAPTIONSTOKEN_H

@class NSString;
@protocol VCCaptionsTranscriptionSegment;

#import <Foundation/Foundation.h>


@interface AVCCaptionsToken : NSObject <VCCaptionsTranscriptionSegment>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)description;
-(id)initWithText:(id)arg0 confidence:(CGFloat)arg1 range:(struct _NSRange )arg2 ;
-(void)dealloc;


@end


#endif