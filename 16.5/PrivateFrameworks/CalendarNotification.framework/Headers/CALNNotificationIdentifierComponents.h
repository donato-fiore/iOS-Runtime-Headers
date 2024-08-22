// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNNOTIFICATIONIDENTIFIERCOMPONENTS_H
#define CALNNOTIFICATIONIDENTIFIERCOMPONENTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CALNNotificationIdentifierComponents : NSObject

@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier


-(id)description;
-(id)initWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 ;


@end


#endif