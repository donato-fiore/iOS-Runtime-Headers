// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERABSOLUTEVERDICT_H
#define NEFILTERABSOLUTEVERDICT_H

@protocol NSSecureCoding, NSCopying;


#import "NEFilterVerdict.h"

@interface NEFilterAbsoluteVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>



@property NSUInteger inboundPassOffset; // ivar: _inboundPassOffset
@property NSUInteger inboundPeekOffset; // ivar: _inboundPeekOffset
@property NSUInteger outboundPassOffset; // ivar: _outboundPassOffset
@property NSUInteger outboundPeekOffset; // ivar: _outboundPeekOffset
@property NSInteger statisticsReportFrequency; // ivar: _statisticsReportFrequency


+(BOOL)supportsSecureCoding;
-(NSInteger)filterAction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDrop:(BOOL)arg0 inboundPassOffset:(NSUInteger)arg1 inboundPeekOffset:(NSUInteger)arg2 outboundPassOffset:(NSUInteger)arg3 outboundPeekOffset:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif