// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPBUTTON_H
#define CPBUTTON_H

@class NSString, NSUUID, UIImage;
@protocol CPControl, NSSecureCoding, CPControlDelegate;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"

@interface CPButton : NSObject <CPControl, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) UIImage *image;
@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 handler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handlePressesEnd;
-(void)handlePressesStart;
-(void)handlePrimaryAction;


@end


#endif