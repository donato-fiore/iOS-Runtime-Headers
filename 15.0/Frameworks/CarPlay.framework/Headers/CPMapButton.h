// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMAPBUTTON_H
#define CPMAPBUTTON_H

@class NSString, UIImage, NSUUID;
@protocol CPControl, NSSecureCoding, CPMapButtonDelegate;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"

@interface CPMapButton : NSObject <CPControl, NSSecureCoding>



@property (weak, nonatomic) NSObject<CPMapButtonDelegate> *controlDelegate; // ivar: _controlDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIImage *focusedImage; // ivar: _focusedImage
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handlePrimaryAction;


@end


#endif