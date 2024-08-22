// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKAUTHORIZATIONRECORD_H
#define _HKAUTHORIZATIONRECORD_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate; // ivar: _anchorLimitModifiedDate
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSInteger request; // ivar: _request
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)recordWithStatus:(NSInteger)arg0 request:(NSInteger)arg1 mode:(NSInteger)arg2 anchorLimitModifiedDate:(id)arg3 ;
-(BOOL)deniedReading;
-(BOOL)deniedSharing;
-(BOOL)isCompatibleStatus:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readingEnabled;
-(BOOL)sharingEnabled;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAuthorizationStatus:(NSInteger)arg0 authorizationRequest:(NSInteger)arg1 authorizationMode:(NSInteger)arg2 anchorLimitModifiedDate:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)recordWithReadingDisabled;
-(id)recordWithSharingDisabled;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif