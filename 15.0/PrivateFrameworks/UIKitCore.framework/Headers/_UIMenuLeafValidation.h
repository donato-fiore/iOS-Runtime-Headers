// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIMENULEAFVALIDATION_H
#define _UIMENULEAFVALIDATION_H


#import <Foundation/Foundation.h>

#import "_UIValidatableCommand.h"

@interface _UIMenuLeafValidation : NSObject {
    _UIValidatableCommand *_validatedCommand;
}




-(id)init;
-(id)validatedActionForTarget:(id)arg0 action:(id)arg1 ;
-(id)validatedCommandForTarget:(id)arg0 command:(id)arg1 alternate:(id)arg2 ;


@end


#endif