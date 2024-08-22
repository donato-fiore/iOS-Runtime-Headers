// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHREMOTETEMPLATEAVAILABILITYKEYPROVIDER_H
#define ACHREMOTETEMPLATEAVAILABILITYKEYPROVIDER_H

@class HDProfile;

#import <Foundation/Foundation.h>


@interface ACHRemoteTemplateAvailabilityKeyProvider : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)markTemplateAvailable:(id)arg0 error:(*id)arg1 ;
-(BOOL)templateAvailableOnPairedDevice:(id)arg0 error:(*id)arg1 ;
-(id)availabilityStateKeyFromUniqueName:(id)arg0 creatorDevice:(unsigned char)arg1 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif