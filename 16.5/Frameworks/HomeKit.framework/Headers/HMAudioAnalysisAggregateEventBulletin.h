// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAUDIOANALYSISAGGREGATEEVENTBULLETIN_H
#define HMAUDIOANALYSISAGGREGATEEVENTBULLETIN_H

@class HMEEvent, NSArray, NSString;
@protocol HMFLogging, HMFObject;



@interface HMAudioAnalysisAggregateEventBulletin : HMEEvent <HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSArray *bulletins; // ivar: _bulletins
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)decodeBulletinsFromEvent:(id)arg0 error:(*id)arg1 ;
+(id)logCategory;
+(id)topicWithAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
-(BOOL)checkIfBulletinExists:(id)arg0 ;
-(id)bulletinsByAddingOrReplacingBulletin:(id)arg0 ;
-(id)encodedData;
-(id)initWithBulletins:(id)arg0 eventSource:(id)arg1 eventTimestamp:(CGFloat)arg2 ;


@end


#endif