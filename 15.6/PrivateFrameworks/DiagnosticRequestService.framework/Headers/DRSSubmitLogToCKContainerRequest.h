// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSSUBMITLOGTOCKCONTAINERREQUEST_H
#define DRSSUBMITLOGTOCKCONTAINERREQUEST_H

@class NSString, NSDictionary, NSData;


#import "DRSSubmitLogRequest.h"

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName; // ivar: _containerName
@property (readonly, nonatomic) NSString *fileAssetField; // ivar: _fileAssetField
@property (readonly, nonatomic) NSDictionary *recordDictionary; // ivar: _recordDictionary
@property (readonly, nonatomic) NSData *recordDictionaryData; // ivar: _recordDictionaryData
@property (readonly, nonatomic) NSString *recordType; // ivar: _recordType


+(Class)_moClass;
+(id)entityName;
+(id)recordZoneID;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)expectedType;
-(id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)debugDescription;
-(id)initWithXPCDict:(id)arg0 ;
-(id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)arg0 ;
-(id)recordRepresentation;
-(id)requestType;
-(id)targetContainerName;
-(void)_configureRequestMO:(id)arg0 ;


@end


#endif