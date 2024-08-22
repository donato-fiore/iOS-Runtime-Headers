// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSSHARINGACTIVITYPROVIDER_H
#define TSSHARINGACTIVITYPROVIDER_H

@class NSArray;
@protocol TSSharingActivityProviderType;

#import <Foundation/Foundation.h>


@interface TSSharingActivityProvider : NSObject <TSSharingActivityProviderType>

 {
    ? activityItemSources;
    ? activities;
    ? excludedActivityTypes;
    ? linkPresentationSource;
}


@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, copy) NSArray *activityItemSources;
@property (nonatomic, readonly) NSArray *activityItems;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, copy) id *linkPresentationSource;


-(id)init;
-(id)initWithActivityItems:(id)arg0 activitySources:(id)arg1 excludedActivityTypes:(id)arg2 linkPresentationSource:(id)arg3 ;


@end


#endif