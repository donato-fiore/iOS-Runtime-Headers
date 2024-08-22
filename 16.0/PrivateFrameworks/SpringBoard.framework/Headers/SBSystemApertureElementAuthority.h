// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTUREELEMENTAUTHORITY_H
#define SBSYSTEMAPERTUREELEMENTAUTHORITY_H

@class NSString;
@protocol SAUIElementConsidering, SAUIElementConsideringDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemApertureElementAuthority : NSObject <SAUIElementConsidering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SAUIElementConsideringDelegate> *elementConsideringDelegate; // ivar: _elementConsideringDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)elementsOrderedByPromotionFromTemporallyOrderedElements:(id)arg0 withPreviousOrdering:(id)arg1 ;


@end


#endif