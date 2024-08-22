// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPBARBUTTON_H
#define CPBARBUTTON_H

@class NSString, NSUUID, UIImage;
@protocol CPControl, NSSecureCoding, CPBarButtonDelegate;

#import <Foundation/Foundation.h>


@interface CPBarButton : NSObject <CPControl, NSSecureCoding>



@property (nonatomic) NSInteger buttonStyle; // ivar: _buttonStyle
@property (readonly, nonatomic) NSUInteger buttonType; // ivar: _buttonType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPBarButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 handler:(id)arg1 ;
-(id)initWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handlePressesEnd;
-(void)handlePressesStart;
-(void)handlePrimaryAction;


@end


#endif