// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILADDITIONENTRY_H
#define QLTHUMBNAILADDITIONENTRY_H

@class NSString, NSDate, NSURL, NSData;
@protocol PQLResultSetInitializer, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLThumbnailAdditionEntry : NSObject <PQLResultSetInitializer, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger documentID; // ivar: _documentID
@property (readonly) NSUInteger hash;
@property (retain) NSDate *lastHitDate; // ivar: _lastHitDate
@property (retain) NSURL *lastSeenURL; // ivar: _lastSeenURL
@property NSInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly) NSString *unparsedVolumeUUID;
@property (retain) NSData *vol_uuid; // ivar: _vol_uuid


+(BOOL)supportsSecureCoding;
-(id)initFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif