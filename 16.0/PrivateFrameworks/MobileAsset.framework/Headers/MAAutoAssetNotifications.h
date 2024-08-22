// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSETNOTIFICATIONS_H
#define MAAUTOASSETNOTIFICATIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetNotifications : NSObject <NSSecureCoding>



@property (nonatomic) BOOL assetPurged; // ivar: _assetPurged
@property (nonatomic) BOOL checkForNewerFailure; // ivar: _checkForNewerFailure
@property (nonatomic) BOOL contentAvailableForUse; // ivar: _contentAvailableForUse
@property (nonatomic) BOOL contentVersionRevoked; // ivar: _contentVersionRevoked
@property (nonatomic) BOOL downloadAbandoned; // ivar: _downloadAbandoned
@property (nonatomic) BOOL downloadPending; // ivar: _downloadPending
@property (nonatomic) BOOL downloadProgress; // ivar: _downloadProgress
@property (nonatomic) BOOL filesystemSpaceCritical; // ivar: _filesystemSpaceCritical
@property (nonatomic) BOOL lockUsageCheck; // ivar: _lockUsageCheck
@property (nonatomic) BOOL newerVersionDiscovered; // ivar: _newerVersionDiscovered


+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif