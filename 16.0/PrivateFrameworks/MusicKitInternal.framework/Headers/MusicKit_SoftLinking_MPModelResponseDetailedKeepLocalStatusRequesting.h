// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELRESPONSEDETAILEDKEEPLOCALSTATUSREQUESTING_H
#define MUSICKIT_SOFTLINKING_MPMODELRESPONSEDETAILEDKEEPLOCALSTATUSREQUESTING_H

@class NSArray, NSString, MusicKit_SoftLinking_MPModelObject;
@protocol MPModelResponseDetailedKeepLocalStatusRequesting;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelResponseDetailedKeepLocalStatusRequesting : NSObject <MPModelResponseDetailedKeepLocalStatusRequesting>



@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // ivar: _modelObject
@property (readonly) Class superclass;


-(id)initWithModelObject:(id)arg0 children:(id)arg1 ;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(NSInteger)arg0 responseHandler:(id)arg1 ;


@end


#endif