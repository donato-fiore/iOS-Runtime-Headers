// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCREMOTEBARBUTTON_H
#define DOCREMOTEBARBUTTON_H

@class UIBarButtonItem, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DOCRemoteBarButton : NSObject <NSSecureCoding>



@property (readonly) UIBarButtonItem *barButton; // ivar: _barButton
@property (readonly) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)initWithBarButton:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif