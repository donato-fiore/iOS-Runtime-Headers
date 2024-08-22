// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFENDSEARCHFEEDBACK_H
#define SFENDSEARCHFEEDBACK_H

@class NSString;


#import "SFFeedback.h"

@interface SFEndSearchFeedback : SFFeedback

@property (nonatomic) NSUInteger cancelSearchEvent; // ivar: _cancelSearchEvent
@property (nonatomic) BOOL isCanceled; // ivar: _isCanceled
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartSearch:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif