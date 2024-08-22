// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLSIGNEDINFO_H
#define SAMLSIGNEDINFO_H

@class NSString, NSArray, NSNumber;


#import "SAMLBaseElement.h"

@interface SAMLSignedInfo : SAMLBaseElement

@property (readonly, nonatomic) NSString *canonicalizationMethod;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *references;
@property (readonly, nonatomic) NSString *signatureMethod;
@property (readonly, nonatomic) NSNumber *signatureMethodLength;


+(id)createElement:(*id)arg0 ;
-(?)xmlNode;


@end


#endif