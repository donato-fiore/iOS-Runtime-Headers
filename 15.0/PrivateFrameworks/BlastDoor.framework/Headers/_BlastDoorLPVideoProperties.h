// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPVIDEOPROPERTIES_H
#define _BLASTDOORLPVIDEOPROPERTIES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _BlastDoorLPVideoProperties : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (nonatomic) BOOL hasAudio; // ivar: _hasAudio


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif