// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXDEVICESETUPOPTIONSMUTATION_H
#define _SVXDEVICESETUPOPTIONSMUTATION_H

@class NSString;
@protocol SVXDeviceSetupOptionsMutating;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupOptions.h"

@interface _SVXDeviceSetupOptionsMutation : NSObject <SVXDeviceSetupOptionsMutating>

 {
    SVXDeviceSetupOptions *_baseModel;
    NSString *_languageCode;
    NSInteger _gender;
    NSInteger _hasActiveAccount;
    NSInteger _isNewsRestricted;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setGender:(NSInteger)arg0 ;
-(void)setHasActiveAccount:(NSInteger)arg0 ;
-(void)setIsNewsRestricted:(NSInteger)arg0 ;
-(void)setLanguageCode:(id)arg0 ;


@end


#endif