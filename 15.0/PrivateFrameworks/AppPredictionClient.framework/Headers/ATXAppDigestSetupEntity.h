// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPDIGESTSETUPENTITY_H
#define ATXAPPDIGESTSETUPENTITY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXAppDigestSetupEntity : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSUInteger numBasicNotifications; // ivar: _numBasicNotifications
@property (nonatomic) NSUInteger numMessageNotifications; // ivar: _numMessageNotifications
@property (nonatomic) NSUInteger numTimeSensitiveNonMessageNotifications; // ivar: _numTimeSensitiveNonMessageNotifications


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleId:(id)arg0 numBasicNotifications:(NSUInteger)arg1 numMessageNotifications:(NSUInteger)arg2 numTimeSenstiveNonMessageNotifications:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif