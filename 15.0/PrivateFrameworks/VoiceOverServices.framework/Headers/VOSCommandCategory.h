// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOSCOMMANDCATEGORY_H
#define VOSCOMMANDCATEGORY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VOSCommandCategory : NSObject

@property (retain, nonatomic) NSArray *commands; // ivar: _commands
@property (retain, nonatomic) NSString *localizedCategoryName; // ivar: _localizedCategoryName


+(BOOL)categories:(id)arg0 containsCommand:(id)arg1 ;
+(id)advancedNavigation;
+(id)allCategories;
+(id)basicNavigation;
+(id)brailleScreenInput;
+(id)editing;
+(id)handwriting;
+(id)interaction;
+(id)internalOnly;
+(id)other;
+(id)output;
+(id)rotor;
+(id)scrolling;
+(id)speechAndAudio;
+(id)system;
+(id)textNavigation;
+(id)voiceOverFeatures;
-(BOOL)containsCommand:(id)arg0 ;
-(id)init;
-(id)initWithCommands:(id)arg0 localizedCategoryName:(id)arg1 ;


@end


#endif