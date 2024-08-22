// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTLOADVALIDATIONPOLICY_H
#define TSPDOCUMENTLOADVALIDATIONPOLICY_H


#import <Foundation/Foundation.h>


@interface TSPDocumentLoadValidationPolicy : NSObject

@property (readonly, nonatomic) BOOL scanForOSLikeCorruption; // ivar: _scanForOSLikeCorruption
@property (readonly, nonatomic) NSInteger timing; // ivar: _timing
@property (readonly, nonatomic) BOOL validateDataCRC; // ivar: _validateDataCRC
@property (readonly, nonatomic) BOOL validateDataDigest; // ivar: _validateDataDigest
@property (readonly, nonatomic) BOOL validateModel; // ivar: _validateModel


+(id)loadValidationPolicyWithTiming:(NSInteger)arg0 validateModel:(BOOL)arg1 validateDataCRC:(BOOL)arg2 validateDataDigest:(BOOL)arg3 scanForOSLikeCorruption:(BOOL)arg4 ;
-(id)description;
-(id)initWithTiming:(NSInteger)arg0 validateModel:(BOOL)arg1 validateDataCRC:(BOOL)arg2 validateDataDigest:(BOOL)arg3 scanForOSLikeCorruption:(BOOL)arg4 ;


@end


#endif