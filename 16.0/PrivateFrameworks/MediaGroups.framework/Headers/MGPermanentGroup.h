// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGPERMANENTGROUP_H
#define MGPERMANENTGROUP_H

@class NSString;
@protocol MGAirPlayMetadataProtocol;


#import "MGGroup.h"

@interface MGPermanentGroup : MGGroup <MGAirPlayMetadataProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)predicateForCurrentDevice;
+(id)predicateForPermanentGroup;
+(id)predicateForType;
+(id)type;
-(id)UUID;
-(id)syncUUID;
-(void)addMember:(id)arg0 completion:(id)arg1 ;
-(void)removeMember:(id)arg0 completion:(id)arg1 ;
-(void)setName:(id)arg0 completion:(id)arg1 ;


@end


#endif