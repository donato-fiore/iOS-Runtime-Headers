// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUDISCLOSUREACTIONVIEWMODEL_H
#define MUDISCLOSUREACTIONVIEWMODEL_H

@class NSString, UIImage;
@protocol MUDisclosureActionViewModelProviding;

#import <Foundation/Foundation.h>


@interface MUDisclosureActionViewModel : NSObject <MUDisclosureActionViewModelProviding>



@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *titleString; // ivar: _titleString




@end


#endif