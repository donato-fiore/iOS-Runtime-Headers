// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPINTERNALFEEDBACK_H
#define PPINTERNALFEEDBACK_H

@class PPBaseFeedback, NSString;
@protocol BMStoreData;



@interface PPInternalFeedback : PPBaseFeedback <BMStoreData>



@property (readonly, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned char storeType; // ivar: _storeType
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)fromBaseFeedback:(id)arg0 storeType:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithFeedbackItems:(id)arg0 timestamp:(id)arg1 clientIdentifier:(id)arg2 clientBundleId:(id)arg3 mappingId:(id)arg4 ;
-(id)initWithFeedbackItems:(id)arg0 timestamp:(id)arg1 clientIdentifier:(id)arg2 clientBundleId:(id)arg3 mappingId:(id)arg4 storeType:(unsigned char)arg5 build:(id)arg6 ;
-(id)json;
-(id)serialize;


@end


#endif