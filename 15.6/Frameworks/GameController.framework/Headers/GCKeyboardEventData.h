// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCKEYBOARDEVENTDATA_H
#define GCKEYBOARDEVENTDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCKeyboardEventData : NSObject <NSSecureCoding>



@property unsigned short keyCode; // ivar: _keyCode
@property BOOL pressed; // ivar: _pressed
@property NSUInteger senderID; // ivar: _senderID


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif