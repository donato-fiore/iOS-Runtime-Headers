// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSELFREQUESTLINKDATA_H
#define CDMSELFREQUESTLINKDATA_H

@class SIRINLUEXTERNALUUID, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface CDMSELFRequestLinkData : NSObject

@property (retain) SIRINLUEXTERNALUUID *nlId; // ivar: _nlId
@property (retain) NSString *resultCandidateId; // ivar: _resultCandidateId
@property NSUInteger splitCount; // ivar: _splitCount
@property (retain) NSString *targetName; // ivar: _targetName
@property (retain) NSUUID *targetUUID; // ivar: _targetUUID




@end


#endif