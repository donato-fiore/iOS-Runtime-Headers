// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTORYBOARDPREVIEWINGSEGUETEMPLATESTORAGE_H
#define UISTORYBOARDPREVIEWINGSEGUETEMPLATESTORAGE_H

@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UIStoryboardSegueTemplate.h"
#import "UIStoryboardPreviewingSegueTemplate.h"
#import "UIView.h"

@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding>



@property (weak, nonatomic) UIStoryboardSegueTemplate *commitTemplate; // ivar: _commitTemplate
@property (weak, nonatomic) UIStoryboardPreviewingSegueTemplate *previewTemplate; // ivar: _previewTemplate
@property (weak, nonatomic) UIView *sender; // ivar: _sender


-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif