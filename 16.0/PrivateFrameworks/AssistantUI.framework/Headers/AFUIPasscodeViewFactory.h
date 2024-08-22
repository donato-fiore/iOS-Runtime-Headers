// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUIPASSCODEVIEWFACTORY_H
#define AFUIPASSCODEVIEWFACTORY_H

@class NSString;
@protocol AFUIPasscodeViewFactoryProtocol;

#import <Foundation/Foundation.h>


@interface AFUIPasscodeViewFactory : NSObject <AFUIPasscodeViewFactoryProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)lockView;


@end


#endif