// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISACTIVITYUPDATEPROVIDER_H
#define ACUISACTIVITYUPDATEPROVIDER_H

@class NSString, ACActivityDescriptor;
@protocol ACUISActivityUpdateProviding, _TtP18ActivityUIServices23ActivityUpdateProviding_;

#import <Foundation/Foundation.h>


@interface ACUISActivityUpdateProvider : NSObject <ACUISActivityUpdateProviding>

 {
    id<_TtP18ActivityUIServices23ActivityUpdateProviding_> *_updateProviding;
}


@property (readonly, copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) ACActivityDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(NSInteger)_activityState:(NSInteger)arg0 ;
-(id)initWithActivityUpdateProviding:(id)arg0 ;


@end


#endif