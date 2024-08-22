// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFINTERSTITIALCONFIGURATIONMUTATION_H
#define _AFINTERSTITIALCONFIGURATIONMUTATION_H

@class NSString;
@protocol AFInterstitialConfigurationMutating;

#import <Foundation/Foundation.h>

#import "AFInterstitialConfiguration.h"

@interface _AFInterstitialConfigurationMutation : NSObject <AFInterstitialConfigurationMutating>

 {
    AFInterstitialConfiguration *_base;
    NSInteger _style;
    NSString *_languageCode;
    NSInteger _gender;
    NSString *_recordRoute;
    BOOL _isVoiceTrigger;
    BOOL _isDucking;
    BOOL _isTwoShot;
    NSUInteger _speechEndHostTime;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsDucking;
-(BOOL)getIsTwoShot;
-(BOOL)getIsVoiceTrigger;
-(BOOL)isDirty;
-(NSInteger)getGender;
-(NSInteger)getStyle;
-(NSUInteger)getSpeechEndHostTime;
-(id)getLanguageCode;
-(id)getRecordRoute;
-(id)initWithBase:(id)arg0 ;
-(void)setGender:(NSInteger)arg0 ;
-(void)setIsDucking:(BOOL)arg0 ;
-(void)setIsTwoShot:(BOOL)arg0 ;
-(void)setIsVoiceTrigger:(BOOL)arg0 ;
-(void)setLanguageCode:(id)arg0 ;
-(void)setRecordRoute:(id)arg0 ;
-(void)setSpeechEndHostTime:(NSUInteger)arg0 ;
-(void)setStyle:(NSInteger)arg0 ;


@end


#endif