// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALCMTOGGLEBUTTON_H
#define SALCMTOGGLEBUTTON_H

@class NSDictionary, NSString;


#import "SAAceView.h"
#import "SABaseCommand.h"

@interface SALCMToggleButton : SAAceView

@property (retain, nonatomic) SABaseCommand *commandToToggleToOffMode;
@property (retain, nonatomic) SABaseCommand *commandToToggleToOnMode;
@property (copy, nonatomic) NSDictionary *offIconDynamicImage;
@property (copy, nonatomic) NSString *offTitle;
@property (copy, nonatomic) NSDictionary *onIconDynamicImage;
@property (copy, nonatomic) NSString *onTitle;


+(id)toggleButton;
+(id)toggleButtonWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif