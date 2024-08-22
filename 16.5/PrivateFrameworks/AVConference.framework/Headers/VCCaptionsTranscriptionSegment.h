// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCAPTIONSTRANSCRIPTIONSEGMENT_H
#define VCCAPTIONSTRANSCRIPTIONSEGMENT_H

@class NSString;
@protocol NSCopying, NSCoding, NSSecureCoding, VCCaptionsTranscriptionSegment;

#import <Foundation/Foundation.h>


@interface VCCaptionsTranscriptionSegment : NSObject <NSCopying, NSCoding, NSSecureCoding, VCCaptionsTranscriptionSegment>



@property (readonly, nonatomic) unsigned int confidence; // ivar: _confidence
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(unsigned int)arg0 text:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif