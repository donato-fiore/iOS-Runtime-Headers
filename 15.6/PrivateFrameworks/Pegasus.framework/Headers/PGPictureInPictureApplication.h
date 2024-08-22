// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPICTUREINPICTUREAPPLICATION_H
#define PGPICTUREINPICTUREAPPLICATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGPictureInPictureApplication : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier


+(id)pictureInPictureApplicationWithProcessIdentifier:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPGPictureInPictureApplication:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithProcessIdentifier:(int)arg0 ;
-(void)dealloc;


@end


#endif