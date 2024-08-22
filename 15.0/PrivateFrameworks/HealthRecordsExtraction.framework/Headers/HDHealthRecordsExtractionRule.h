// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHRECORDSEXTRACTIONRULE_H
#define HDHEALTHRECORDSEXTRACTIONRULE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HDHealthRecordsExtractionRule : NSObject

@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy, nonatomic) NSArray *transforms; // ivar: _transforms


+(id)extractionRuleWithDefinition:(id)arg0 error:(*id)arg1 ;
-(id)definitionBySubstitutingKeyPathWith:(id)arg0 ;
-(id)init;
-(id)initWithKeyPath:(id)arg0 transforms:(id)arg1 ;


@end


#endif