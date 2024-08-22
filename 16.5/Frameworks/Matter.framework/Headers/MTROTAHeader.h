// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROTAHEADER_H
#define MTROTAHEADER_H

@class NSData, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTROTAHeader : NSObject

@property (copy, nonatomic) NSData *imageDigest; // ivar: _imageDigest
@property (nonatomic) NSUInteger imageDigestType; // ivar: _imageDigestType
@property (copy, nonatomic) NSNumber *maxApplicableVersion; // ivar: _maxApplicableVersion
@property (copy, nonatomic) NSNumber *minApplicableVersion; // ivar: _minApplicableVersion
@property (copy, nonatomic) NSNumber *payloadSize; // ivar: _payloadSize
@property (copy, nonatomic) NSNumber *productID; // ivar: _productID
@property (copy, nonatomic) NSString *releaseNotesURL; // ivar: _releaseNotesURL
@property (copy, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (copy, nonatomic) NSString *softwareVersionString; // ivar: _softwareVersionString
@property (copy, nonatomic) NSNumber *vendorID; // ivar: _vendorID


-(id)initWithData:(id)arg0 ;


@end


#endif