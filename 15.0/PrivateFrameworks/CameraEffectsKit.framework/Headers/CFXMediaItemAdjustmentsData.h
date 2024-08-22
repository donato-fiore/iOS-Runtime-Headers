// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXMEDIAITEMADJUSTMENTSDATA_H
#define CFXMEDIAITEMADJUSTMENTSDATA_H

@class NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CFXMediaItemAdjustmentsData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger cameraMode; // ivar: _cameraMode
@property (readonly, nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (readonly, nonatomic) NSArray *effectStack; // ivar: _effectStack
@property (readonly, nonatomic) NSURL *metadataURL; // ivar: _metadataURL


+(BOOL)supportsSecureCoding;
+(id)secureCodingClassWhitelist;
-(id)initWithCameraMode:(NSInteger)arg0 metadataURL:(id)arg1 cameraPosition:(NSInteger)arg2 effectStack:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif