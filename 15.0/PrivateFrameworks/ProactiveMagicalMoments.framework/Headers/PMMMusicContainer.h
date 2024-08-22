// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMMMUSICCONTAINER_H
#define PMMMUSICCONTAINER_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PMMMusicContainer : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSDate *pauseTime; // ivar: _pauseTime
@property (readonly, nonatomic) NSDate *playTime; // ivar: _playTime
@property (readonly, nonatomic) NSString *trackIdentifier; // ivar: _trackIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPauseIfUnset;
-(void)setPlayingWithBundleId:(id)arg0 trackIdentifier:(id)arg1 playTime:(id)arg2 ;


@end


#endif