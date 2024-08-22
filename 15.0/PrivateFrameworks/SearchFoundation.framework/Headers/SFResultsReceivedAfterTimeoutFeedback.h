// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRESULTSRECEIVEDAFTERTIMEOUTFEEDBACK_H
#define SFRESULTSRECEIVEDAFTERTIMEOUTFEEDBACK_H

@class NSArray;
@protocol NSCopying;


#import "SFFeedback.h"

@interface SFResultsReceivedAfterTimeoutFeedback : SFFeedback <NSCopying>



@property (copy, nonatomic) NSArray *results; // ivar: _results


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResults:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif