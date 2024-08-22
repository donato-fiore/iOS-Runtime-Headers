// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRIDGEDACCOUNTPAGEVIEWCONTROLLERFACTORY_H
#define BRIDGEDACCOUNTPAGEVIEWCONTROLLERFACTORY_H

@class NSString;
@protocol SKAccountPageViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface BridgedAccountPageViewControllerFactory : NSObject <SKAccountPageViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAccountPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAccountPageViewControllerFor:(id)arg0 ;


@end


#endif