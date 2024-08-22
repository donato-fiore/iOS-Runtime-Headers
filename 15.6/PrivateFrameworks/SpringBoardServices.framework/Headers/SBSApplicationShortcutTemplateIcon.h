// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSAPPLICATIONSHORTCUTTEMPLATEICON_H
#define SBSAPPLICATIONSHORTCUTTEMPLATEICON_H

@class NSString;


#import "SBSApplicationShortcutIcon.h"

@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *templateImageName; // ivar: _templateImageName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initForSubclass;
-(id)initWithTemplateImageName:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif