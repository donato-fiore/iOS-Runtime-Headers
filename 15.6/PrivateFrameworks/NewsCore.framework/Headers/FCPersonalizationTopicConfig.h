// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPERSONALIZATIONTOPICCONFIG_H
#define FCPERSONALIZATIONTOPICCONFIG_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationTopicConfig : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL capAtBaseline; // ivar: _capAtBaseline
@property (nonatomic) NSInteger limitInGroup; // ivar: _limitInGroup
@property (nonatomic) CGFloat scoreMultiplier; // ivar: _scoreMultiplier
@property (nonatomic) CGFloat tagWeight; // ivar: _tagWeight
@property (copy, nonatomic) NSString *topicID; // ivar: _topicID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 defaultConfig:(id)arg1 ;
-(id)initWithTopicID:(id)arg0 scoreMultiplier:(CGFloat)arg1 tagWeight:(CGFloat)arg2 capAtBaseline:(BOOL)arg3 limitInGroup:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif