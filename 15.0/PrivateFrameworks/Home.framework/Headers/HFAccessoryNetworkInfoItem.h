// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYNETWORKINFOITEM_H
#define HFACCESSORYNETWORKINFOITEM_H



#import "HFAccessoryInfoItem.h"

@interface HFAccessoryNetworkInfoItem : HFAccessoryInfoItem

@property (nonatomic) NSUInteger networkInfoType; // ivar: _networkInfoType


-(BOOL)_hiddenForType:(NSUInteger)arg0 ;
-(NSUInteger)_nextNetworkInfoType;
-(NSUInteger)infoType;
-(id)_localizedDescriptionForType:(NSUInteger)arg0 ;
-(id)_localizedTitleForType:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 ;
-(void)toggleNetworkInfoType;


@end


#endif