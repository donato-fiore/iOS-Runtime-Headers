// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCOMFORTSOUND_H
#define HUCOMFORTSOUND_H

@class AXAsset, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HUComfortSoundsShuffler.h"

@interface HUComfortSound : NSObject <NSSecureCoding>



@property (retain, nonatomic) AXAsset *asset; // ivar: _asset
@property (retain, nonatomic) HUComfortSoundsShuffler *fileShuffler; // ivar: _fileShuffler
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSURL *path; // ivar: _path
@property (nonatomic) NSUInteger soundGroup; // ivar: _soundGroup


+(BOOL)supportsSecureCoding;
+(id)comfortSoundWithAsset:(id)arg0 ;
+(id)defaultComfortSoundForGroup:(NSUInteger)arg0 ;
+(id)soundWithName:(id)arg0 path:(id)arg1 andGroup:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(id)nextFilePath;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif