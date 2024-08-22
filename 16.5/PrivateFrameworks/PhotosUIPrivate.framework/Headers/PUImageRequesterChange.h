// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMAGEREQUESTERCHANGE_H
#define PUIMAGEREQUESTERCHANGE_H


#import <Foundation/Foundation.h>


@interface PUImageRequesterChange : NSObject

@property (readonly, nonatomic) BOOL changed;
@property (nonatomic, setter=_setFullsizeImageDataDidChange:) BOOL fullsizeImageDataDidChange; // ivar: _fullsizeImageDataDidChange
@property (nonatomic, setter=_setFullsizeImageURLDidChange:) BOOL fullsizeImageURLDidChange; // ivar: _fullsizeImageURLDidChange
@property (nonatomic, setter=_setImageDidChange:) BOOL imageDidChange; // ivar: _imageDidChange
@property (nonatomic, setter=_setImageIsFullQualityDidChange:) BOOL imageIsFullQualityDidChange; // ivar: _imageIsFullQualityDidChange
@property (nonatomic, setter=_setImageIsHigherQualityDidChange:) BOOL imageIsHigherQualityDidChange; // ivar: _imageIsHigherQualityDidChange




@end


#endif