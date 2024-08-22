// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSASSETPOLICY_H
#define DDSASSETPOLICY_H

@class NSString, NSDateComponents, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DDSAssetPolicy : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *downloadCompletionNotification; // ivar: _downloadCompletionNotification
@property (nonatomic) BOOL downloadOverCellular; // ivar: _downloadOverCellular
@property (nonatomic) BOOL downloadWithoutPower; // ivar: _downloadWithoutPower
@property (retain, nonatomic) NSDateComponents *idleUsageEvictionPeriod; // ivar: _idleUsageEvictionPeriod
@property (copy, nonatomic) NSSet *notificationDownloadTriggers; // ivar: _notificationDownloadTriggers
@property (nonatomic) NSInteger preferredDownloadFrequency; // ivar: _preferredDownloadFrequency


+(BOOL)supportsSecureCoding;
+(id)assetPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssetPolicy:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dumpDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringForAssetDownloadFrequency:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif