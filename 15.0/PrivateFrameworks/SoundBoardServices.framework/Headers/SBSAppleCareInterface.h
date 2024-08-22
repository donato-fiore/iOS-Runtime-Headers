// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSAPPLECAREINTERFACE_H
#define SBSAPPLECAREINTERFACE_H

@class NSXPCConnection;
@protocol SBSAppleCareImplementer;

#import <Foundation/Foundation.h>


@interface SBSAppleCareInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSAppleCareImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)setAppleCareIsEnabled:(BOOL)arg0 withOptions:(id)arg1 ;


@end


#endif