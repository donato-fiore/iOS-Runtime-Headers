// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSEARCHVIEWAPPEARFEEDBACK_H
#define SFSEARCHVIEWAPPEARFEEDBACK_H

@class NSString;


#import "SFFeedback.h"

@interface SFSearchViewAppearFeedback : SFFeedback

@property (nonatomic) BOOL isOnLockScreen; // ivar: _isOnLockScreen
@property (nonatomic) BOOL isOverApp; // ivar: _isOverApp
@property (nonatomic) BOOL isUsingLoweredSearchBar; // ivar: _isUsingLoweredSearchBar
@property (copy, nonatomic) NSString *originatingApp; // ivar: _originatingApp
@property (copy, nonatomic) NSString *preexistingInput; // ivar: _preexistingInput
@property (nonatomic) BOOL readerTextAvailable; // ivar: _readerTextAvailable
@property (nonatomic) NSUInteger viewAppearEvent; // ivar: _viewAppearEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif