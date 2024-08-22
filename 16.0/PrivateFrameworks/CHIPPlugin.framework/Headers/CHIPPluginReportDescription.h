// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINREPORTDESCRIPTION_H
#define CHIPPLUGINREPORTDESCRIPTION_H

@class HMFObject, NSArray, NSString, NSNumber;



@interface CHIPPluginReportDescription : HMFObject

@property (readonly) NSArray *attributeIds; // ivar: _attributeIds
@property (retain, nonatomic) NSString *clusterClass; // ivar: _clusterClass
@property (readonly) NSNumber *clusterId; // ivar: _clusterId
@property (retain, nonatomic) NSString *clusterSelector; // ivar: _clusterSelector
@property (readonly) NSArray *eventIds; // ivar: _eventIds
@property (copy, nonatomic) id *mapEvent; // ivar: _mapEvent
@property (copy, nonatomic) id *mapValue; // ivar: _mapValue


-(id)initWithClusterId:(id)arg0 attributeIds:(id)arg1 eventIds:(id)arg2 ;


@end


#endif