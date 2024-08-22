// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCALLINGSTATUSDOMAINDATA_H
#define STCALLINGSTATUSDOMAINDATA_H

@class NSSet, NSArray, NSString;
@protocol STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData;

#import <Foundation/Foundation.h>

#import "STListData.h"

@interface STCallingStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>



@property (readonly, copy, nonatomic) NSSet *activeCallAttributions;
@property (readonly, copy, nonatomic) NSSet *activeVideoConferenceAttributions;
@property (readonly, copy, nonatomic) STListData *callDescriptorListData; // ivar: _callDescriptorListData
@property (readonly, copy, nonatomic) NSArray *callDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *ringingCallAttributions;
@property (readonly, copy, nonatomic) NSSet *ringingVideoConferenceAttributions;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_activeAudioCallDescriptors;
-(id)_activeVideoCallDescriptors;
-(id)_initWithCallDescriptorListData:(id)arg0 ;
-(id)_ringingAudioCallDescriptors;
-(id)_ringingVideoCallDescriptors;
-(id)_videoOrCopresenceCallDescriptorsWithCallState:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithCallDescriptorListData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif