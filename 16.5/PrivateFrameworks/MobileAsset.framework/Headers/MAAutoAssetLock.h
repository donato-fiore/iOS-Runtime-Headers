// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETLOCK_H
#define MAAUTOASSETLOCK_H

@class NSDictionary, NSURL, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetSelector.h"

@interface MAAutoAssetLock : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSDictionary *assetAttributes; // ivar: _assetAttributes
@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector; // ivar: _fullAssetSelector
@property (nonatomic) BOOL inhibitedFromEmergencyRemoval; // ivar: _inhibitedFromEmergencyRemoval
@property (readonly, retain, nonatomic) NSURL *localContentURL; // ivar: _localContentURL
@property (retain, nonatomic) NSMutableDictionary *lockReasons; // ivar: _lockReasons


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initForSelector:(id)arg0 withLocalContentURL:(id)arg1 withAssetAttributes:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif