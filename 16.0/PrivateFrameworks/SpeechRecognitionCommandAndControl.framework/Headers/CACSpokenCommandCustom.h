// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACSPOKENCOMMANDCUSTOM_H
#define CACSPOKENCOMMANDCUSTOM_H

@class NSDictionary, NSString;


#import "CACSpokenCommand.h"

@interface CACSpokenCommandCustom : CACSpokenCommand

@property (readonly) NSDictionary *customProperties; // ivar: _customProperties
@property (retain) NSString *primaryCommand; // ivar: _primaryCommand


-(BOOL)isCustomCommand;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCommandIdentifier:(id)arg0 ;
-(void)handleSpokenCommand:(id)arg0 ;


@end


#endif