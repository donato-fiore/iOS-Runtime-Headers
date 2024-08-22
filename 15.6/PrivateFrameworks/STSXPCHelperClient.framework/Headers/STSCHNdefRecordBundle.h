// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCHNDEFRECORDBUNDLE_H
#define STSCHNDEFRECORDBUNDLE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "STSNDEFRecord.h"

@interface STSCHNdefRecordBundle : NSObject

@property (retain, nonatomic) STSNDEFRecord *alternativeRecord; // ivar: _alternativeRecord
@property (retain, nonatomic) NSArray *auxiliaryRecords; // ivar: _auxiliaryRecords
@property (retain, nonatomic) STSNDEFRecord *configurationRecord; // ivar: _configurationRecord
@property (retain, nonatomic) STSNDEFRecord *errorRecord; // ivar: _errorRecord


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAlternativeRecord:(id)arg0 configurationRecord:(id)arg1 auxiliaryRecords:(id)arg2 errorRecord:(id)arg3 ;


@end


#endif