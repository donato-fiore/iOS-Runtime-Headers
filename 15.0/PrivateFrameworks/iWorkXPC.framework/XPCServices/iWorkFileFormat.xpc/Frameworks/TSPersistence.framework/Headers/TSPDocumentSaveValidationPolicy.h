// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDOCUMENTSAVEVALIDATIONPOLICY_H
#define TSPDOCUMENTSAVEVALIDATIONPOLICY_H


#import <Foundation/Foundation.h>


@interface TSPDocumentSaveValidationPolicy : NSObject

@property (readonly, nonatomic) NSInteger corruptedDataFailToSaveMitigationPolicy; // ivar: _corruptedDataFailToSaveMitigationPolicy
@property (readonly, nonatomic) NSInteger corruptedDataRemovalMitigationPolicy; // ivar: _corruptedDataRemovalMitigationPolicy
@property (readonly, nonatomic) BOOL scanForOSLikeCorruption; // ivar: _scanForOSLikeCorruption
@property (readonly, nonatomic) BOOL validateDataCRC; // ivar: _validateDataCRC
@property (readonly, nonatomic) BOOL validateDataDigest; // ivar: _validateDataDigest


+(id)saveValidationPolicyWithValidateDataCRC:(BOOL)arg0 validateDataDigest:(BOOL)arg1 scanForOSLikeCorruption:(BOOL)arg2 corruptedDataFailToSaveMitigationPolicy:(NSInteger)arg3 corruptedDataRemovalMitigationPolicy:(NSInteger)arg4 ;
-(id)description;
-(id)initWithValidateDataCRC:(BOOL)arg0 validateDataDigest:(BOOL)arg1 scanForOSLikeCorruption:(BOOL)arg2 corruptedDataFailToSaveMitigationPolicy:(NSInteger)arg3 corruptedDataRemovalMitigationPolicy:(NSInteger)arg4 ;


@end


#endif