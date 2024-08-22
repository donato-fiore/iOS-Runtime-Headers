// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFVISIBLESECTIONHEADERFEEDBACK_H
#define SFVISIBLESECTIONHEADERFEEDBACK_H



#import "SFFeedback.h"
#import "SFResultSection.h"

@interface SFVisibleSectionHeaderFeedback : SFFeedback

@property (nonatomic) NSUInteger headerType; // ivar: _headerType
@property (copy, nonatomic) SFResultSection *section; // ivar: _section


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSection:(id)arg0 headerType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif