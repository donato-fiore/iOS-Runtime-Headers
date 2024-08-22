// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKASSETREREFERENCEINFO_H
#define CKASSETREREFERENCEINFO_H

@class NSData, NSURL, NSString, NSError;

#import <Foundation/Foundation.h>

#import "CKRecordZoneID.h"

@interface CKAssetRereferenceInfo : NSObject

@property (retain, nonatomic) NSData *assetKey; // ivar: _assetKey
@property (retain, nonatomic) NSURL *contentBaseURL; // ivar: _contentBaseURL
@property (retain, nonatomic) NSString *destinationFieldName; // ivar: _destinationFieldName
@property (retain, nonatomic) NSString *downloadToken; // ivar: _downloadToken
@property (nonatomic) NSUInteger downloadTokenExpiration; // ivar: _downloadTokenExpiration
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *owner; // ivar: _owner
@property (retain, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature
@property (retain, nonatomic) NSString *requestor; // ivar: _requestor
@property (readonly, nonatomic) CKRecordZoneID *sourceZoneID; // ivar: _sourceZoneID


-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(id)initWithSourceZoneID:(id)arg0 ;


@end


#endif