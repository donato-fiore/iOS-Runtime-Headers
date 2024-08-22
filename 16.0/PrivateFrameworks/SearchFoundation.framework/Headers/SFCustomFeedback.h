// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCUSTOMFEEDBACK_H
#define SFCUSTOMFEEDBACK_H

@class NSData, NSDictionary;


#import "SFFeedback.h"

@interface SFCustomFeedback : SFFeedback

@property (copy, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSUInteger feedbackType; // ivar: _feedbackType
@property (copy, nonatomic) NSDictionary *jsonFeedback; // ivar: _jsonFeedback


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 data:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 jsonFeedback:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif