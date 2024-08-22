// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSASSERTDESCRIPTOR_H
#define DDSASSERTDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DDSAssetPolicy.h"

@interface DDSAssertDescriptor : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *assertionIdentifier; // ivar: _assertionIdentifier
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) DDSAssetPolicy *policy; // ivar: _policy


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dumpDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPolicy:(id)arg0 assertionID:(id)arg1 clientID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif