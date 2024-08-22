// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPDASHBOARDBUTTON_H
#define CPDASHBOARDBUTTON_H

@class NSString, NSUUID, UIImage, NSArray;
@protocol CPControl, NSSecureCoding, CPControlDelegate;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"

@interface CPDashboardButton : NSObject <CPControl, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (readonly, nonatomic) NSArray *subtitleVariants; // ivar: _subtitleVariants
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *titleVariants; // ivar: _titleVariants


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitleVariants:(id)arg0 subtitleVariants:(id)arg1 image:(id)arg2 handler:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handlePrimaryAction;


@end


#endif