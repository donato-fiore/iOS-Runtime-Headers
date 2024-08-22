// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGAMEINTENTSETTINGS_H
#define GCGAMEINTENTSETTINGS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCGameIntentSettings : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger appLibraryPod; // ivar: _appLibraryPod
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *gameBundleID; // ivar: _gameBundleID
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)appLibrarySettings:(BOOL)arg0 appLibraryPod:(NSInteger)arg1 ;
+(id)gameSettings:(BOOL)arg0 gameBundleID:(id)arg1 ;
+(id)homeScreenSettings:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif