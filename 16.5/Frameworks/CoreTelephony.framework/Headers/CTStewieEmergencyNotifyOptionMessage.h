// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEEMERGENCYNOTIFYOPTIONMESSAGE_H
#define CTSTEWIEEMERGENCYNOTIFYOPTIONMESSAGE_H

@class NSString;
@protocol CTStewieMessageOutgoing;

#import <Foundation/Foundation.h>


@interface CTStewieEmergencyNotifyOptionMessage : NSObject <CTStewieMessageOutgoing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger notifyOption; // ivar: _notifyOption
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEmergencyUpdateNotifyOptionMessage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotifyOption:(NSInteger)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif