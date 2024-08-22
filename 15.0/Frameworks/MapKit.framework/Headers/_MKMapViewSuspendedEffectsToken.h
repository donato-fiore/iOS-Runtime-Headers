// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKMAPVIEWSUSPENDEDEFFECTSTOKEN_H
#define _MKMAPVIEWSUSPENDEDEFFECTSTOKEN_H

@class NSString;
@protocol _MKMapViewSuspendedEffectsToken;

#import <Foundation/Foundation.h>

#import "MKMapView.h"

@interface _MKMapViewSuspendedEffectsToken : NSObject <_MKMapViewSuspendedEffectsToken>

 {
    BOOL _invalidated;
    MKMapView *_owner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOwner:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif