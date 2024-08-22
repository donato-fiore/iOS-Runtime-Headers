// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMVOICEMAILTRANSCRIPTSEGMENT_H
#define VMVOICEMAILTRANSCRIPTSEGMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMVoicemailTranscriptSegment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) NSUInteger confidenceRating; // ivar: _confidenceRating
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *substring; // ivar: _substring
@property (readonly, nonatomic) _NSRange substringRange; // ivar: _substringRange
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTranscriptionSegment:(id)arg0 confidenceThreshold:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif