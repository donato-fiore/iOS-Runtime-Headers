// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINDISPLAYINTERFACEORIENTATIONAGGREGATOR_H
#define SBMAINDISPLAYINTERFACEORIENTATIONAGGREGATOR_H

@class NSArray;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {
    id<BSInvalidatable> *_stateCaptureHandle;
}


@property (readonly, nonatomic) NSInteger activeInterfaceOrientation;
@property (readonly, retain, nonatomic) NSArray *interfaceOrientationSources;


-(NSInteger)_layoutOrientation;
-(NSInteger)activeInterfaceOrientationAtOrBelow:(CGFloat)arg0 ;
-(NSInteger)activeInterfaceOrientationBelow:(CGFloat)arg0 ;
-(id)_highestSourceAtOrBelow:(CGFloat)arg0 amongSources:(id)arg1 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)highestActiveInterfaceOrientationSource;
-(id)highestActiveInterfaceOrientationSourceBelow:(CGFloat)arg0 ;
-(id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(CGFloat)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_sortSources:(id)arg0 ;
-(void)dealloc;


@end


#endif