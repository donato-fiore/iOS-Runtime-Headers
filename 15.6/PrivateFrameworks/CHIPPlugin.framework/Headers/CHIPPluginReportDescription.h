// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINREPORTDESCRIPTION_H
#define CHIPPLUGINREPORTDESCRIPTION_H

@class HMFObject, NSArray, NSString, NSNumber;



@interface CHIPPluginReportDescription : HMFObject

@property (readonly) NSArray *attributeIds; // ivar: _attributeIds
@property (retain, nonatomic) NSString *clusterClass; // ivar: _clusterClass
@property (readonly) NSNumber *clusterId; // ivar: _clusterId
@property (retain, nonatomic) NSString *clusterSelector; // ivar: _clusterSelector
@property (copy, nonatomic) id *mapValue; // ivar: _mapValue


-(id)initWithClusterId:(id)arg0 attributeIds:(id)arg1 ;


@end


#endif