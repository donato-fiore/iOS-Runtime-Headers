// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACSPOKENCOMMANDGROUP_H
#define CACSPOKENCOMMANDGROUP_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface CACSpokenCommandGroup : NSObject

@property (retain, nonatomic) NSMutableArray *commandsArray; // ivar: _commandsArray
@property (retain, nonatomic) NSString *displayString; // ivar: _displayString
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isConfirmationRequired; // ivar: _isConfirmationRequired
@property (nonatomic) BOOL isCustom; // ivar: _isCustom
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) NSUInteger searchScore; // ivar: _searchScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)isVisible;
-(id)cloneWithoutCommands;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(void)saveToPreferences;
-(void)setLocale:(id)arg0 ;


@end


#endif