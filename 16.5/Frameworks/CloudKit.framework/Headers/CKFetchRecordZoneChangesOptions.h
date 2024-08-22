// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHRECORDZONECHANGESOPTIONS_H
#define CKFETCHRECORDZONECHANGESOPTIONS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKServerChangeToken.h"

@interface CKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property BOOL fetchChangesMadeByThisDevice; // ivar: _fetchChangesMadeByThisDevice
@property BOOL fetchNewestChangesFirst; // ivar: _fetchNewestChangesFirst
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneConfiguration:(id)arg0 ;
-(id)zoneConfiguration;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif