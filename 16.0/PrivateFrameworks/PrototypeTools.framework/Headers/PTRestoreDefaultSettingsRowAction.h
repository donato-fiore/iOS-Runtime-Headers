// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTRESTOREDEFAULTSETTINGSROWACTION_H
#define PTRESTOREDEFAULTSETTINGSROWACTION_H

@class NSString;


#import "PTRowAction.h"

@interface PTRestoreDefaultSettingsRowAction : PTRowAction

@property (readonly, nonatomic) NSString *settingsKeyPath; // ivar: _settingsKeyPath


+(BOOL)supportsSecureCoding;
+(id)action;
+(id)actionWithSettingsKeyPath:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)defaultHandler:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif