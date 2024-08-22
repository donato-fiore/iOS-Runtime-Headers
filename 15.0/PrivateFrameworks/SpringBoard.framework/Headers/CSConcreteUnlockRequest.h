// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSCONCRETEUNLOCKREQUEST_H
#define CSCONCRETEUNLOCKREQUEST_H

@class NSString;
@protocol CSUnlockRequest;

#import <Foundation/Foundation.h>


@interface CSConcreteUnlockRequest : NSObject <CSUnlockRequest>



@property (nonatomic) BOOL confirmedNotInPocket; // ivar: confirmedNotInPocket
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int intent; // ivar: intent
@property (copy, nonatomic) NSString *name; // ivar: name
@property (nonatomic) int source; // ivar: source
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsBiometricPresentation; // ivar: wantsBiometricPresentation




@end


#endif