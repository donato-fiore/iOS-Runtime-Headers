// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRWATCHPAIRINGEXTENDEDMETADATA_H
#define NRWATCHPAIRINGEXTENDEDMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger chipID; // ivar: _chipID
@property (nonatomic) BOOL isCellularEnabled; // ivar: _isCellularEnabled
@property (nonatomic) NSInteger pairingVersion; // ivar: _pairingVersion
@property (nonatomic) BOOL postFailsafeObliteration; // ivar: _postFailsafeObliteration
@property (retain, nonatomic) NSString *productType; // ivar: _productType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif