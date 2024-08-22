// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCPROGRESSEVENT_H
#define PCPROGRESSEVENT_H

@class NSError, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCProgressEvent : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (copy, nonatomic) NSString *mediaRemoteID; // ivar: _mediaRemoteID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithEventType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif