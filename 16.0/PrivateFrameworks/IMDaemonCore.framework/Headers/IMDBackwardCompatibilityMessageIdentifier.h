// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDBACKWARDCOMPATIBILITYMESSAGEIDENTIFIER_H
#define IMDBACKWARDCOMPATIBILITYMESSAGEIDENTIFIER_H


#import <Foundation/Foundation.h>

#import "__IMDBackwardCompatibilityMessageIdentifier.h"

@interface IMDBackwardCompatibilityMessageIdentifier : NSObject

@property (retain, nonatomic) __IMDBackwardCompatibilityMessageIdentifier *swiftImplementation; // ivar: _swiftImplementation


+(id)sharedIdentifier;
-(BOOL)isIgnorableBackwardCompatibilityMessage:(id)arg0 inChat:(id)arg1 ;
-(id)init;


@end


#endif