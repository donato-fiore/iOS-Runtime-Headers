// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFBIOMEUSAGECOUNTSBYROOMFETCHREQUEST_H
#define HFBIOMEUSAGECOUNTSBYROOMFETCHREQUEST_H

@class NSMapTable;


#import "HFBiomeAbstractFetchRequest.h"

@interface HFBiomeUsageCountsByRoomFetchRequest : HFBiomeAbstractFetchRequest

@property (retain) NSMapTable *accessoryRepresentablesByUniqueIdentifier; // ivar: _accessoryRepresentablesByUniqueIdentifier
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain) NSMapTable *roomsByUniqueIdentifier; // ivar: _roomsByUniqueIdentifier
@property (retain) NSMapTable *usageCountByAccessoryRepresentableByRoom; // ivar: _usageCountByAccessoryRepresentableByRoom


-(id)_accessoryRepresentableWithUniqueIdentifierString:(id)arg0 uniqueIdentifierToAccessoryRepesentableBlock:(id)arg1 ;
-(id)_roomWithUniqueIdentifierString:(id)arg0 uniqueIdentifierToRoomBlock:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)successHandler;
-(void)_incrementUsageCountForAccessoryRepresentable:(id)arg0 inRoom:(id)arg1 ;
-(void)eventHandler:(id)arg0 ;


@end


#endif