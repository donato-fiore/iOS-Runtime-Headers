// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSEARCHVIEWDISAPPEARFEEDBACK_H
#define SFSEARCHVIEWDISAPPEARFEEDBACK_H



#import "SFFeedback.h"

@interface SFSearchViewDisappearFeedback : SFFeedback

@property (nonatomic) NSInteger viewDisappearEvent; // ivar: _viewDisappearEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif