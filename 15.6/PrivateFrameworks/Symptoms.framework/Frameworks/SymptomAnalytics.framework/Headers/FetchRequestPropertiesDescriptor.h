// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FETCHREQUESTPROPERTIESDESCRIPTOR_H
#define FETCHREQUESTPROPERTIESDESCRIPTOR_H

@class NSCoder, NSArray;
@protocol NSSecureCoding;



@interface FetchRequestPropertiesDescriptor : NSCoder <NSSecureCoding>



@property (readonly, nonatomic) NSArray *aggregateProperties; // ivar: _aggregateProperties
@property (readonly, nonatomic) NSArray *fetchProperties; // ivar: _fetchProperties
@property (readonly, nonatomic) NSArray *groupByProperties; // ivar: _groupByProperties


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)addAggregateProperty:(id)arg0 ;
-(void)addFetchProperty:(id)arg0 ;
-(void)addGroupByProperty:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif