// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSHANDSHAKERESPONSE_H
#define RBSHANDSHAKERESPONSE_H

@class NSDictionary, NSString;
@protocol RBSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "RBSProcessHandle.h"

@interface RBSHandshakeResponse : NSObject <RBSXPCSecureCoding>



@property (retain, nonatomic) NSDictionary *assertionErrorsByOldIdentifier; // ivar: _assertionErrorsByOldIdentifier
@property (retain, nonatomic) NSDictionary *assertionIdentifiersByOldIdentifier; // ivar: _assertionIdentifiersByOldIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RBSProcessHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif