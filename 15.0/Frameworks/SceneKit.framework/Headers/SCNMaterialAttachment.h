// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMATERIALATTACHMENT_H
#define SCNMATERIALATTACHMENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SCNMaterialAttachment : NSObject

@property (nonatomic) *void context; // ivar: context
@property (nonatomic) unsigned int glID; // ivar: glID
@property (copy, nonatomic) NSDictionary *options; // ivar: options
@property (nonatomic) CGSize size; // ivar: size
@property (nonatomic) unsigned int target; // ivar: target


+(id)materialAttachmentWithGLKTextureInfo:(id)arg0 ;
-(void)dealloc;


@end


#endif