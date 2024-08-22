// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOMPOSITESETTING_H
#define HMDCOMPOSITESETTING_H

@class HMFObject, NSString, HMFVersion;
@protocol HMDCompositeSettingIsEqualValueImplementing, HMFLogging;



@interface HMDCompositeSetting : HMFObject <HMDCompositeSettingIsEqualValueImplementing, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMFVersion *readVersion; // ivar: _readVersion
@property (readonly) Class superclass;
@property (readonly, copy) HMFVersion *writeVersion; // ivar: _writeVersion


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualValue:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithReadVersion:(id)arg0 writeVersion:(id)arg1 ;


@end


#endif