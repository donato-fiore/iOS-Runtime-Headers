// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFBIOMEUSAGECOUNTSFETCHREQUEST_H
#define HFBIOMEUSAGECOUNTSFETCHREQUEST_H

@class NSMapTable;


#import "HFBiomeAbstractFetchRequest.h"

@interface HFBiomeUsageCountsFetchRequest : HFBiomeAbstractFetchRequest

@property (retain) NSMapTable *accessoryRepresentablesByUniqueIdentifier; // ivar: _accessoryRepresentablesByUniqueIdentifier
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain) NSMapTable *usageCountByAccessoryRepresentable; // ivar: _usageCountByAccessoryRepresentable


-(id)_accessoryRepresentableWithUniqueIdentifierString:(id)arg0 uniqueIdentifierToAccessoryRepesentableBlock:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)successHandler;
-(void)_incrementUsageCountForAccessoryRepresentable:(id)arg0 ;
-(void)eventHandler:(id)arg0 ;


@end


#endif