// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSHANDSHAKEREQUEST_H
#define RBSHANDSHAKEREQUEST_H

@class NSSet, NSString, NSArray;
@protocol RBSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding>



@property (retain, nonatomic) NSSet *assertionDescriptors; // ivar: _assertionDescriptors
@property (nonatomic) unsigned int auid; // ivar: _auid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int euid; // ivar: _euid
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *savedEndowments; // ivar: _savedEndowments
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif