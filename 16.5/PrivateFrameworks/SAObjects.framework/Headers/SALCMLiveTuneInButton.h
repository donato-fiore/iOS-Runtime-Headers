// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALCMLIVETUNEINBUTTON_H
#define SALCMLIVETUNEINBUTTON_H

@class NSString;


#import "SAUIButton.h"

@interface SALCMLiveTuneInButton : SAUIButton

@property (copy, nonatomic) NSString *liveTuneInButtonType;


+(id)liveTuneInButton;
+(id)liveTuneInButtonWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif