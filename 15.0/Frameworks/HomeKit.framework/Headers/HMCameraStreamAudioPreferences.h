// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASTREAMAUDIOPREFERENCES_H
#define HMCAMERASTREAMAUDIOPREFERENCES_H

@class NSSet, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSSet *codecs; // ivar: _codecs
@property (readonly, nonatomic) NSNumber *volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVolume:(id)arg0 codecs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif