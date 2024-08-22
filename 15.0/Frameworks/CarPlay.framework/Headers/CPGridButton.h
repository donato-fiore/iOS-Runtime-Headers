// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPGRIDBUTTON_H
#define CPGRIDBUTTON_H

@class NSString, NSUUID, UIImage, NSArray;
@protocol CPControl, NSSecureCoding, CPControlDelegate;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"

@interface CPGridButton : NSObject <CPControl, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *titleVariants; // ivar: _titleVariants


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGridButton:(id)arg0 ;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitleVariants:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handlePrimaryAction;


@end


#endif