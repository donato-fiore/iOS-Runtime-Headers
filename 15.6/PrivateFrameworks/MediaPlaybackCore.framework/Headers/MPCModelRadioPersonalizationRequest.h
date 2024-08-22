// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELRADIOPERSONALIZATIONREQUEST_H
#define MPCMODELRADIOPERSONALIZATIONREQUEST_H

@class MPModelRequest, MPSectionedCollection;
@protocol NSCopying;



@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying>

 {
    MPSectionedCollection *_radioStationTracks;
}


@property (nonatomic) BOOL analyticsSignpostsEnabled; // ivar: _analyticsSignpostsEnabled


+(BOOL)requiresNetwork;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRadioStationTracks:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif