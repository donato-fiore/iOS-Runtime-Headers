// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHRECORDZONECHANGESCONFIGURATION_H
#define CKFETCHRECORDZONECHANGESCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKServerChangeToken.h"

@interface CKFetchRecordZoneChangesConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy) NSArray *desiredKeys; // ivar: _desiredKeys
@property BOOL fetchChangesMadeByThisDevice; // ivar: _fetchChangesMadeByThisDevice
@property BOOL fetchNewestChangesFirst; // ivar: _fetchNewestChangesFirst
@property (copy) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property NSUInteger resultsLimit; // ivar: _resultsLimit


+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif