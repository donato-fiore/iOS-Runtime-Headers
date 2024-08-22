// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMUTABLECALLINGSTATUSDOMAINDATA_H
#define STMUTABLECALLINGSTATUSDOMAINDATA_H

@class NSSet, NSArray, NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STCallingStatusDomainData.h"
#import "STMutableListData.h"

@interface STMutableCallingStatusDomainData : STCallingStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (copy, nonatomic) NSSet *activeCallAttributions;
@property (copy, nonatomic) NSSet *activeVideoConferenceAttributions;
@property (readonly, copy, nonatomic) STMutableListData *callDescriptorListData;
@property (copy, nonatomic) NSArray *callDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *ringingCallAttributions;
@property (copy, nonatomic) NSSet *ringingVideoConferenceAttributions;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCallDescriptorListData:(id)arg0 ;
-(void)addActiveCallAttribution:(id)arg0 ;
-(void)addActiveVideoConferenceAttribution:(id)arg0 ;
-(void)addCallDescriptor:(id)arg0 ;
-(void)addRingingCallAttribution:(id)arg0 ;
-(void)addRingingVideoConferenceAttribution:(id)arg0 ;
-(void)removeActiveCallAttribution:(id)arg0 ;
-(void)removeActiveVideoConferenceAttribution:(id)arg0 ;
-(void)removeCallDescriptor:(id)arg0 ;
-(void)removeRingingCallAttribution:(id)arg0 ;
-(void)removeRingingVideoConferenceAttribution:(id)arg0 ;


@end


#endif