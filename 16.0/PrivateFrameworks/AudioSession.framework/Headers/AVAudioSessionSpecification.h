// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOSESSIONSPECIFICATION_H
#define AVAUDIOSESSIONSPECIFICATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAudioSessionSpecification : NSObject <NSSecureCoding>



@property (nonatomic) ? clientAuditToken; // ivar: _clientAuditToken
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: clientIdentifier
@property (nonatomic) NSUInteger sessionType; // ivar: sessionType
@property (nonatomic) unsigned int siblingID; // ivar: siblingID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif