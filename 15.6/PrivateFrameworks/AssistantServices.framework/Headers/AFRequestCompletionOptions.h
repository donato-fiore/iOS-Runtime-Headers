// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFREQUESTCOMPLETIONOPTIONS_H
#define AFREQUESTCOMPLETIONOPTIONS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AFTriggerlessListeningOptions.h"

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions; // ivar: _triggerlessListeningOptions


+(BOOL)supportsSecureCoding;
-(id)_initWithShowUIDuringListening:(BOOL)arg0 playAlertBeforeListening:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif