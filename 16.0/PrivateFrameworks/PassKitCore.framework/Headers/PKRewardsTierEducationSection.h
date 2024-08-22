// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREWARDSTIEREDUCATIONSECTION_H
#define PKREWARDSTIEREDUCATIONSECTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKRewardsTierEducationSection : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSUInteger tier; // ivar: _tier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTier:(NSUInteger)arg0 localizedTitle:(id)arg1 localizedSubtitle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif