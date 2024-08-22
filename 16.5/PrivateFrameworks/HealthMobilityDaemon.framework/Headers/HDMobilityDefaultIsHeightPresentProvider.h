// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMOBILITYDEFAULTISHEIGHTPRESENTPROVIDER_H
#define HDMOBILITYDEFAULTISHEIGHTPRESENTPROVIDER_H

@class HDProfile;
@protocol HDMobilityIsHeightPresentProvider;

#import <Foundation/Foundation.h>


@interface HDMobilityDefaultIsHeightPresentProvider : NSObject <HDMobilityIsHeightPresentProvider>

 {
    HDProfile *_profile;
}




-(id)initWithProfile:(id)arg0 ;
-(id)isHeightPresentWithError:(*id)arg0 ;


@end


#endif