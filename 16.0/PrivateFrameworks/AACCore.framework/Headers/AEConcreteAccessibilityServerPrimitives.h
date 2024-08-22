// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AECONCRETEACCESSIBILITYSERVERPRIMITIVES_H
#define AECONCRETEACCESSIBILITYSERVERPRIMITIVES_H

@protocol AEAccessibilityServerPrimitives;

#import <Foundation/Foundation.h>


@interface AEConcreteAccessibilityServerPrimitives : NSObject <AEAccessibilityServerPrimitives>



@property (readonly, nonatomic, getter=isRestrictedForAAC) BOOL restrictedForAAC;


-(id)observeGuidedAccessActiveStateChangeOnQueue:(id)arg0 withHandler:(id)arg1 ;


@end


#endif