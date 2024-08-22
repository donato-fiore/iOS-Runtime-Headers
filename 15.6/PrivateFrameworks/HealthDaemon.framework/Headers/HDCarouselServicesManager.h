// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCAROUSELSERVICESMANAGER_H
#define HDCAROUSELSERVICESMANAGER_H

@class HDAssertionManager, NSString;
@protocol HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDCarouselServicesManager : NSObject <HDAssertionObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)takeDisableAOTAssertionForOwnerIdentifier:(id)arg0 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg0 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg0 supportsAOT:(BOOL)arg1 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)assertionManager:(id)arg0 assertionTaken:(id)arg1 ;


@end


#endif