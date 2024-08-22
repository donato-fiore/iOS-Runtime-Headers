// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCRFMBSNAPSHOT_H
#define DMCRFMBSNAPSHOT_H

@class NSDate, NSString, MBSnapshot;
@protocol DMCRFSnapshot, DMCRFSnapshotIdentifier;

#import <Foundation/Foundation.h>


@interface DMCRFMBSnapshot : NSObject <DMCRFSnapshot>



@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<DMCRFSnapshotIdentifier> *identifier;
@property (retain, nonatomic) MBSnapshot *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;


+(id)snapshotIdentifierFromSnapshot:(id)arg0 ;
-(id)initWithSnapshot:(id)arg0 ;


@end


#endif