// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFTRIGGERNATURALLANGUAGEOPTIONS_H
#define HFTRIGGERNATURALLANGUAGEOPTIONS_H

@class NSArray, HMHome, HMUser, NSSet;


#import "HFNaturalLanguageOptions.h"
#import "HFActionNaturalLanguageOptions.h"

@interface HFTriggerNaturalLanguageOptions : HFNaturalLanguageOptions

@property (retain, nonatomic) HFActionNaturalLanguageOptions *actionNaturalLanguageOptions; // ivar: _actionNaturalLanguageOptions
@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) NSInteger formattingStyle; // ivar: _formattingStyle
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (weak, nonatomic) HMUser *locationEventUser; // ivar: _locationEventUser
@property (nonatomic) NSUInteger nameType; // ivar: _nameType
@property (retain, nonatomic) NSSet *objectsInContext; // ivar: _objectsInContext
@property (nonatomic) BOOL shouldUseFirstPersonPronounIfPossible; // ivar: _shouldUseFirstPersonPronounIfPossible
@property (nonatomic) BOOL shouldUseFullDayNames; // ivar: _shouldUseFullDayNames


+(id)optionsWithHome:(id)arg0 nameType:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 nameType:(NSUInteger)arg1 ;
-(id)initWithHome:(id)arg0 nameType:(NSUInteger)arg1 actions:(id)arg2 ;
-(void)_copyFromOptions:(id)arg0 ;


@end


#endif