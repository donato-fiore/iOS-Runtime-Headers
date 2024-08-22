// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANSENDERCONTEXT_H
#define ANSENDERCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ANSenderContext : NSObject

@property (nonatomic) BOOL isValidDevice; // ivar: _isValidDevice
@property (retain, nonatomic) NSString *senderCorrelationIdentifier; // ivar: _senderCorrelationIdentifier


-(id)description;


@end


#endif