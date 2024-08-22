// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERPAIR_H
#define PBFPOSTERPAIR_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface PBFPosterPair : NSObject {
    ? id;
    ? localizedTitle;
    ? configuration;
    ? configuredProperties;
    ? associatedConfiguration;
    ? observers;
}


@property (nonatomic, readonly) NSUUID *configurationUUID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *localizedTitle;


-(id)init;
-(id)initWithConfiguration:(id)arg0 associatedConfiguration:(id)arg1 ;


@end


#endif