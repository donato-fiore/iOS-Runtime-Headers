// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDEBUG_H
#define PXDEBUG_H

@class UIImageView, NSString;



@interface PXDebug : UIImageView

@property (nonatomic) *CGColor backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) *CGImage previewImage; // ivar: _previewImage


-(id)__dbg_formattedDisplayName;
-(id)__dbg_snapshotImage;
-(id)description;
-(id)layer;


@end


#endif