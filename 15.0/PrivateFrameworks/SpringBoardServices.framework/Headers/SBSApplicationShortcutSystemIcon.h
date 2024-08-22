// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSAPPLICATIONSHORTCUTSYSTEMICON_H
#define SBSAPPLICATIONSHORTCUTSYSTEMICON_H

@class NSString;


#import "SBSApplicationShortcutIcon.h"

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initForSubclass;
-(id)initWithSystemImageName:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif