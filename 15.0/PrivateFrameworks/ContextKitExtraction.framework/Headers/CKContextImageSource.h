// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONTEXTIMAGESOURCE_H
#define CKCONTEXTIMAGESOURCE_H

@class NSData, IOSurface;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKContextImageSource : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *cameraIntrinsics; // ivar: _cameraIntrinsics
@property (retain, nonatomic) IOSurface *ioSurface; // ivar: _ioSurface
@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (nonatomic) NSInteger profile; // ivar: _profile


+(BOOL)supportsSecureCoding;
+(id)imageSourceForUIImage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIOSurface:(id)arg0 ;
-(id)initWithIOSurface:(id)arg0 cameraIntrinsics:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif