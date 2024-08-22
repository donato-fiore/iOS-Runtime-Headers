// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKUSERACTIVITY_H
#define CUIKUSERACTIVITY_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface CUIKUserActivity : NSObject

@property (retain, nonatomic) NSSet *activityKeywords; // ivar: _activityKeywords
@property (retain, nonatomic) NSString *activitySubtitle; // ivar: _activitySubtitle
@property (retain, nonatomic) NSString *activityTitle; // ivar: _activityTitle
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)_boolFromDictionary:(id)arg0 key:(id)arg1 error:(*BOOL)arg2 ;
+(CGFloat)_doubleFromDictionary:(id)arg0 key:(id)arg1 error:(*BOOL)arg2 ;
+(NSInteger)_integerFromDictionary:(id)arg0 key:(id)arg1 error:(*BOOL)arg2 ;
+(NSUInteger)_typeFromDictionary:(id)arg0 ;
+(NSUInteger)_unsignedIntegerFromDictionary:(id)arg0 key:(id)arg1 error:(*BOOL)arg2 ;
+(id)_stringFromDictionary:(id)arg0 key:(id)arg1 error:(*BOOL)arg2 ;
+(id)activityForActivity:(id)arg0 ;
+(id)activityForDictionary:(id)arg0 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(void)updateActivity:(id)arg0 ;


@end


#endif