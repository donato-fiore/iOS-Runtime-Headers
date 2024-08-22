// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTODAYFEEDCONFIGREQUEST_H
#define FCTODAYFEEDCONFIGREQUEST_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCTodayFeedConfigRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *additionalRecordIDs; // ivar: _additionalRecordIDs
@property (readonly, nonatomic) NSUInteger feedType; // ivar: _feedType
@property (readonly, copy, nonatomic) NSString *forYouConfigID; // ivar: _forYouConfigID
@property (readonly, copy, nonatomic) NSString *formatVersion; // ivar: _formatVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeedType:(NSUInteger)arg0 forYouConfigID:(id)arg1 formatVersion:(id)arg2 additionalRecordIDs:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif