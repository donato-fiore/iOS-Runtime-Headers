// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTRONGPASSWORDGENERATOR_H
#define SFSTRONGPASSWORDGENERATOR_H

@class WBSPasswordGenerationManager;

#import <Foundation/Foundation.h>


@interface SFStrongPasswordGenerator : NSObject {
    WBSPasswordGenerationManager *_passwordGenerationManager;
}




-(id)generatedPasswordForAppWithAppID:(id)arg0 associatedDomains:(id)arg1 passwordRules:(id)arg2 confirmPasswordRules:(id)arg3 ;
-(id)init;


@end


#endif