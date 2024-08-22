// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPNOWPLAYINGBUTTON_H
#define CPNOWPLAYINGBUTTON_H

@class NSString, NSUUID;
@protocol CPControl, NSSecureCoding, CPControlDelegate;

#import <Foundation/Foundation.h>


@interface CPNowPlayingButton : NSObject <CPControl, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handlePrimaryAction;


@end


#endif