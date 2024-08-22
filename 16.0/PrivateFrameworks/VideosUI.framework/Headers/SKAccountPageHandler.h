// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKACCOUNTPAGEHANDLER_H
#define SKACCOUNTPAGEHANDLER_H

@class NSString;
@protocol SKAccountPageViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface SKAccountPageHandler : NSObject <SKAccountPageViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)accountPageViewControllerDidFinish:(id)arg0 ;


@end


#endif