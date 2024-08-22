// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMEDIASTATUSDOMAINDATA_H
#define STMEDIASTATUSDOMAINDATA_H

@class NSArray, NSSet, NSString;
@protocol STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData;

#import <Foundation/Foundation.h>

#import "STActivityAttributionCatalog.h"
#import "STListData.h"

@interface STMediaStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>



@property (readonly, copy, nonatomic) STActivityAttributionCatalog *attributionCatalog; // ivar: _attributionCatalog
@property (readonly, copy, nonatomic) NSArray *audioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSSet *audioRecordingAttributions;
@property (readonly, copy, nonatomic) STListData *cameraAttributionListData; // ivar: _cameraAttributionListData
@property (readonly, copy, nonatomic) NSArray *cameraAttributions;
@property (readonly, copy, nonatomic) NSArray *cameraCaptureAttributionList;
@property (readonly, copy, nonatomic) NSSet *cameraCaptureAttributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *mutedAudioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSSet *mutedAudioRecordingAttributions;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithAttributionCatalog:(id)arg0 cameraAttributionListData:(id)arg1 ;
-(id)camerasInUseMatchingAttribution:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithAttributionCatalog:(id)arg0 cameraAttributionListData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif