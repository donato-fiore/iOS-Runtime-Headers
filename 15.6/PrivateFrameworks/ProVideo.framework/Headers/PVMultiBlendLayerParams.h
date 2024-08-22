// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVMULTIBLENDLAYERPARAMS_H
#define PVMULTIBLENDLAYERPARAMS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PVMultiBlendLayerParams : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) int hgBlendMode;
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) float opacity; // ivar: _opacity


+(BOOL)supportsSecureCoding;
-(id)blendModeName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOpacity:(float)arg0 mode:(int)arg1 ;
-(void)_sharedInitWithOpacity:(float)arg0 mode:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif