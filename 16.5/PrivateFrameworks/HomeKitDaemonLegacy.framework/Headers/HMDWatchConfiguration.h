// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDWATCHCONFIGURATION_H
#define HMDWATCHCONFIGURATION_H

@class HMFObject, NSDictionary, NSUUID, NSString;



@interface HMDWatchConfiguration : HMFObject

@property (retain, nonatomic) NSDictionary *homeConfig; // ivar: _homeConfig
@property (retain, nonatomic) NSDictionary *metadataConfig; // ivar: _metadataConfig
@property (retain, nonatomic) NSUUID *primaryHome; // ivar: _primaryHome
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


-(id)description;
-(id)initWithUniqueID:(id)arg0 ;
-(void)setConfigVersion:(id)arg0 forHome:(id)arg1 ;


@end


#endif