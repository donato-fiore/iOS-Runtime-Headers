// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFHOMEACCESSCODE_H
#define _MKFHOMEACCESSCODE_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol MKFHomeAccessCode, MKFHomeAccessCodePrivateExtensions;


#import "MKFHomeAccessCodeDatabaseID.h"

@interface _MKFHomeAccessCode : MKFModel <MKFHomeAccessCode, MKFHomeAccessCodePrivateExtensions>



@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSString *accessCode;
@property (readonly, copy, nonatomic) MKFHomeAccessCodeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(BOOL)validateAccessCodeForInsertOrUpdate:(*id)arg0 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(id)castIfHomeAccessCode;
-(id)fetchOtherGuestAccessCodesInHome:(id)arg0 ;
-(id)fetchOtherUserAccessCodesInHome:(id)arg0 ;
-(id)homeForHomeAccessCode:(id)arg0 ;


@end


#endif