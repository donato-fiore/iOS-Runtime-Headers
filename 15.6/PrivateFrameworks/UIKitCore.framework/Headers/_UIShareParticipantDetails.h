// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISHAREPARTICIPANTDETAILS_H
#define _UISHAREPARTICIPANTDETAILS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIShareParticipantDetails : NSObject <NSSecureCoding>



@property (copy) NSString *detailText; // ivar: _detailText
@property (copy) UIColor *participantColor; // ivar: _participantColor
@property (copy) NSString *participantID; // ivar: _participantID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif