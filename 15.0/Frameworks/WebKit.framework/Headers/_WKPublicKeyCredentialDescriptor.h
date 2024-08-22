// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKPUBLICKEYCREDENTIALDESCRIPTOR_H
#define _WKPUBLICKEYCREDENTIALDESCRIPTOR_H

@class NSData, NSArray;

#import <Foundation/Foundation.h>


@interface _WKPublicKeyCredentialDescriptor : NSObject

@property (copy, nonatomic) NSData *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *transports; // ivar: _transports


-(id)initWithIdentifier:(id)arg0 ;


@end


#endif