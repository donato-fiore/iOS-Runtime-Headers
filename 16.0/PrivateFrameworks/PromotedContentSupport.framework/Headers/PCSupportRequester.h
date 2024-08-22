// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCSUPPORTREQUESTER_H
#define PCSUPPORTREQUESTER_H

@class APXPCActionRequester;



@interface PCSupportRequester : APXPCActionRequester



+(BOOL)canShareConnection;
+(id)machService;
-(id)fetchGenderAndAgeGroupData;
-(id)init;
-(id)remoteObjectInterface;
-(void)addClientToSegments:(id)arg0 replaceExisting:(BOOL)arg1 privateSegment:(BOOL)arg2 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)fetchGenderAndAgeGroupData:(id)arg0 ;
-(void)policiesForContainerType:(id)arg0 adType:(id)arg1 adFormatType:(id)arg2 completion:(id)arg3 ;
-(void)policiesToEnforce:(id)arg0 ;


@end


#endif