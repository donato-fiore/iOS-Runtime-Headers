// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTFAMILYSETUPDELEGATE_H
#define SUSCRIPTFAMILYSETUPDELEGATE_H

@class NSString;
@protocol AAUIFamilySetupDelegate;

#import <Foundation/Foundation.h>


@interface SUScriptFamilySetupDelegate : NSObject <AAUIFamilySetupDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)familySetupViewController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;


@end


#endif