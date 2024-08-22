// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCSUPPORTREQUESTER_H
#define PCSUPPORTREQUESTER_H

@class APXPCActionRequester;



@interface PCSupportRequester : APXPCActionRequester



+(BOOL)canShareConnection;
+(id)machService;
-(id)fetchGenderAndAgeGroupData;
-(id)init;
-(id)policyForPlacement:(id)arg0 placementType:(id)arg1 bannerType:(id)arg2 ;
-(id)remoteObjectInterface;
-(void)addClientToSegments:(id)arg0 replaceExisting:(BOOL)arg1 privateSegment:(BOOL)arg2 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;


@end


#endif