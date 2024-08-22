// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPTEXTBUTTON_H
#define CPTEXTBUTTON_H

@class NSString, NSUUID;
@protocol CPControl, NSSecureCoding, CPControlDelegate;

#import <Foundation/Foundation.h>


@interface CPTextButton : NSObject <CPControl, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textStyle; // ivar: _textStyle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 textStyle:(NSInteger)arg1 handler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handlePressesEnd;
-(void)handlePressesStart;
-(void)handlePrimaryAction;


@end


#endif