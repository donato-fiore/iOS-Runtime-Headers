// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSAPPLICATIONSHORTCUTCUSTOMIMAGEICON_H
#define SBSAPPLICATIONSHORTCUTCUSTOMIMAGEICON_H

@class NSData;


#import "SBSApplicationShortcutIcon.h"

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSInteger dataType; // ivar: _dataType
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSData *imagePNGData;
@property (readonly, nonatomic) BOOL isTemplate; // ivar: _isTemplate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initForSubclass;
-(id)initWithImageData:(id)arg0 dataType:(NSInteger)arg1 ;
-(id)initWithImageData:(id)arg0 dataType:(NSInteger)arg1 isTemplate:(BOOL)arg2 ;
-(id)initWithImagePNGData:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif