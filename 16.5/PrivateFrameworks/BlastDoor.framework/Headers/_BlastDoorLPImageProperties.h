// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPIMAGEPROPERTIES_H
#define _BLASTDOORLPIMAGEPROPERTIES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPPlatformColor.h"

@interface _BlastDoorLPImageProperties : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (retain, nonatomic) _BlastDoorLPPlatformColor *overlaidTextColor; // ivar: _overlaidTextColor
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif