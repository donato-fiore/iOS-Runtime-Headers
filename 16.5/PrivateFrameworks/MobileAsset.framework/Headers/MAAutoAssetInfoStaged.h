// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETINFOSTAGED_H
#define MAAUTOASSETINFOSTAGED_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetInfoStaged : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger assetsSuccessfullyStaged; // ivar: _assetsSuccessfullyStaged
@property (readonly, nonatomic) NSInteger totalStagedBytes; // ivar: _totalStagedBytes


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTotalStagedBytes:(NSInteger)arg0 withAssetsSuccessfullyStaged:(NSUInteger)arg1 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif