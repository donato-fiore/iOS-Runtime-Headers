// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCREDENTIALSELECT_H
#define STSCREDENTIALSELECT_H

@class NSString, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSCredentialSelect : NSObject <NSSecureCoding>

 {
    NSString *_credentialIdentifier;
    NSDictionary *_elementsByNamespace;
    NSData *_authData;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif