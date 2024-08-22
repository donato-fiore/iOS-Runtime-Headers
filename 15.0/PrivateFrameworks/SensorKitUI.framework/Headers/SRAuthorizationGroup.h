// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRAUTHORIZATIONGROUP_H
#define SRAUTHORIZATIONGROUP_H

@class NSBundle, NSString, UIImage, NSArray;

#import <Foundation/Foundation.h>


@interface SRAuthorizationGroup : NSObject {
    NSBundle *_bundle;
}


@property (readonly, copy) NSString *authorizationService;
@property (readonly, retain) UIImage *illustration;
@property (readonly, copy) NSArray *localizedCollectedData;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly, copy) NSArray *localizedNotCollectedData;
@property (readonly, copy) NSString *localizedPlatforms;
@property (readonly, copy) NSString *localizedRequiredAuthAlertDetail;
@property (readonly, copy) NSString *localizedRevokeRequiredAuthAlertDetail;
@property (readonly, copy) NSArray *localizedSampleData;
@property (readonly, copy) NSArray *platforms;
@property (readonly, copy) NSString *writerAuthorizationService;


+(id)authorizationGroupWithServiceName:(id)arg0 ;
+(void)initialize;
-(id)infoPlistAuthorizationCategory;
-(id)initWithBundle:(id)arg0 ;
-(id)localizedExampleDataValue:(id)arg0 ;
-(void)dealloc;


@end


#endif