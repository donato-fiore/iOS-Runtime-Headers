// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPRESENCEOPTIONSELECTIONCONFIRMATIONPROMPT_H
#define HUPRESENCEOPTIONSELECTIONCONFIRMATIONPROMPT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject

@property (readonly, copy, nonatomic) NSString *alertBody; // ivar: _alertBody
@property (readonly, copy, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (readonly, nonatomic) BOOL resetLocationToHomeOnConfirmation; // ivar: _resetLocationToHomeOnConfirmation


-(id)init;
-(id)initWithAlertTitle:(id)arg0 alertBody:(id)arg1 resetLocationToHomeOnConfirmation:(BOOL)arg2 ;


@end


#endif