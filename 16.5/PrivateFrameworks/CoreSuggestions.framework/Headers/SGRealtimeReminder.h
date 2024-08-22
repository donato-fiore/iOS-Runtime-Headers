// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGREALTIMEREMINDER_H
#define SGREALTIMEREMINDER_H

@class NSString;
@protocol NSSecureCoding, NSCopying, SGRealtimeSuggestion;

#import <Foundation/Foundation.h>

#import "SGReminder.h"

@interface SGRealtimeReminder : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *notes; // ivar: _notes
@property (readonly, nonatomic) SGReminder *reminder; // ivar: _reminder
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRealtimeReminder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReminder:(id)arg0 notes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif