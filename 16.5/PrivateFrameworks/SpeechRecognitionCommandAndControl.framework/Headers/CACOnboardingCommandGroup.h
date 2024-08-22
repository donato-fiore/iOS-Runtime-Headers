// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACONBOARDINGCOMMANDGROUP_H
#define CACONBOARDINGCOMMANDGROUP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CACOnboardingCommandGroup : NSObject

@property (retain, nonatomic) NSArray *commands; // ivar: _commands
@property (retain, nonatomic) NSString *groupTitle; // ivar: _groupTitle


+(id)allCommandGroups;
+(id)groupWithIdentifier:(id)arg0 ;
+(id)groupsFromIdentifiers:(id)arg0 ;
-(id)initWithGroupTitle:(id)arg0 commands:(id)arg1 ;


@end


#endif