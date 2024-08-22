// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSIRIENDPOINTPROFILEACCESSORYSETTINGFIELDS_H
#define HMDSIRIENDPOINTPROFILEACCESSORYSETTINGFIELDS_H

@class HMFObject, NSMutableDictionary, NSString;
@protocol HMFLogging;



@interface HMDSiriEndpointProfileAccessorySettingFields : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_serializeFields;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)booleanValueKeyPaths;
+(id)fieldKeyForKeyPath:(id)arg0 ;
+(id)keyPaths;
+(id)languageValueKeyPaths;
+(id)logCategory;
+(id)numberValueKeyPaths;
-(id)attributeDescriptions;
-(id)init;
-(id)serializeFields;
-(void)setBoolValue:(BOOL)arg0 forKeyPath:(id)arg1 ;
-(void)setLanguageValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setNumberValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif