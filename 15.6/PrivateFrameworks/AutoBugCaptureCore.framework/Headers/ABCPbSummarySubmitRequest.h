// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABCPBSUMMARYSUBMITREQUEST_H
#define ABCPBSUMMARYSUBMITREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol CKCodeOperationMessageMutation, NSCopying;



@interface ABCPbSummarySubmitRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *buildPlatform; // ivar: _buildPlatform
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceCategory; // ivar: _deviceCategory
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) BOOL hasBuildPlatform;
@property (readonly, nonatomic) BOOL hasDeviceCategory;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (nonatomic) BOOL hasVer;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *sigRequests; // ivar: _sigRequests
@property (readonly) Class superclass;
@property (nonatomic) unsigned int ver; // ivar: _ver


+(Class)sigRequestType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)sigRequestAtIndex:(NSUInteger)arg0 ;
-(void)addSigRequest:(id)arg0 ;
-(void)clearSigRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif