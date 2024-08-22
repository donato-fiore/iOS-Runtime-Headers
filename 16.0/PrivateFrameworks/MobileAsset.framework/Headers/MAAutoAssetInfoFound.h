// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSETINFOFOUND_H
#define MAAUTOASSETINFOFOUND_H

@class NSDictionary, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetStatus.h"
#import "MAAutoAssetSelector.h"

@interface MAAutoAssetInfoFound : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *assetAttributes; // ivar: _assetAttributes
@property (readonly, nonatomic) MAAutoAssetStatus *currentStatus; // ivar: _currentStatus
@property (readonly, nonatomic) MAAutoAssetSelector *fullAssetSelector; // ivar: _fullAssetSelector
@property (readonly, nonatomic) NSURL *localContentURL; // ivar: _localContentURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initForSelector:(id)arg0 withLocalContentURL:(id)arg1 withAssetAttributes:(id)arg2 reportingStatus:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif