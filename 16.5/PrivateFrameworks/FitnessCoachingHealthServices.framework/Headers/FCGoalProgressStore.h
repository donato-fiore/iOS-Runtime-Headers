// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCGOALPROGRESSSTORE_H
#define FCGOALPROGRESSSTORE_H

@class HDProfile;

#import <Foundation/Foundation.h>


@interface FCGoalProgressStore : NSObject {
    HDProfile *_profile;
}




-(id)_legacyDefaultsDomain;
-(id)_userDefaultsDomain;
-(id)currentConfiguration;
-(id)initWithProfile:(id)arg0 ;
-(id)lastFiredEventDateForIdentifier:(id)arg0 ;
-(void)storeCurrentConfiguration:(id)arg0 ;
-(void)storeFiredEventDate:(id)arg0 identifier:(id)arg1 ;


@end


#endif