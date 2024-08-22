// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOFEATURESCONTROLLER_H
#define GEOFEATURESCONTROLLER_H

@class NSString, NSArray;
@protocol GEOConfigChangeListenerDelegate, GEOFeaturesControllerDelegate;

#import <Foundation/Foundation.h>


@interface GEOFeaturesController : NSObject <GEOConfigChangeListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOFeaturesControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_initializeFeatures;
-(void)dealloc;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;


@end


#endif