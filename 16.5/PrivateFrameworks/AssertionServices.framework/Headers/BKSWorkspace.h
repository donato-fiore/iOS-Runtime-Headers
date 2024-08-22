// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSWORKSPACE_H
#define BKSWORKSPACE_H

@class NSString;
@protocol RBSServiceDelegate;

#import <Foundation/Foundation.h>


@interface BKSWorkspace : NSObject <RBSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)service:(id)arg0 didLoseInheritances:(id)arg1 ;
-(void)service:(id)arg0 didReceiveInheritances:(id)arg1 ;


@end


#endif