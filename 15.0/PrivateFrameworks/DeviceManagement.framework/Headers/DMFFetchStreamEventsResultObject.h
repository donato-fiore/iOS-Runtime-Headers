// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHSTREAMEVENTSRESULTOBJECT_H
#define DMFFETCHSTREAMEVENTSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchStreamEventsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *eventStatuses; // ivar: _eventStatuses


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif