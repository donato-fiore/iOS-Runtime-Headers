// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBGUIDEDACCESSLISTENER_H
#define SBGUIDEDACCESSLISTENER_H


#import <Foundation/Foundation.h>


@interface SBGuidedAccessListener : NSObject

@property (nonatomic) BOOL isGuidedAccessActive; // ivar: _isGuidedAccessActive


+(id)sharedGuidedAccessListener;
-(id)init;
-(void)guidedAccessWasActivated;
-(void)guidedAccessWasDeactivated;


@end


#endif