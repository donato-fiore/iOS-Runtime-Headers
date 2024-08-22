// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28SIRIPRIVATELEARNINGANALYTICS17GROUNDTRUTHRECORD_H
#define _TTC28SIRIPRIVATELEARNINGANALYTICS17GROUNDTRUTHRECORD_H

@class NSManagedObject, NSUUID, NSData, NSString;



@interface _TtC28SiriPrivateLearningAnalytics17GroundTruthRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic) CGFloat timestamp;
@property (nonatomic, copy) NSString *type;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif