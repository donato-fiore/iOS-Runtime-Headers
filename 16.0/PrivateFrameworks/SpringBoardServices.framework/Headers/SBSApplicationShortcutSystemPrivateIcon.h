// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSAPPLICATIONSHORTCUTSYSTEMPRIVATEICON_H
#define SBSAPPLICATIONSHORTCUTSYSTEMPRIVATEICON_H

@class NSString;


#import "SBSApplicationShortcutIcon.h"

@interface SBSApplicationShortcutSystemPrivateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *systemImageName; // ivar: _systemImageName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initForSubclass;
-(id)initWithSystemImageName:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif