// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCERTIFICATECOMMONNAME_H
#define CRKASMCERTIFICATECOMMONNAME_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface CRKASMCertificateCommonName : NSObject

@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(id)commonNameWithString:(id)arg0 ;
-(id)description;
-(id)initWithPrefix:(id)arg0 userIdentifier:(id)arg1 ;
-(id)initWithPrefix:(id)arg0 userIdentifier:(id)arg1 UUID:(id)arg2 ;


@end


#endif