// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFPERSON_H
#define _MKFPERSON_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol MKFPerson, MKFPersonPrivateExtensions;


#import "MKFPersonDatabaseID.h"

@interface _MKFPerson : MKFModel <MKFPerson, MKFPersonPrivateExtensions>



@property (readonly, copy, nonatomic) MKFPersonDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfPerson;
-(id)createHMPerson;
-(void)updateWithHMPerson:(id)arg0 ;


@end


#endif