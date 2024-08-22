// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHRECORDPARSEDHUMANNAME_H
#define HDHEALTHRECORDPARSEDHUMANNAME_H

@class NSString, NSArray, HKMedicalDateInterval;

#import <Foundation/Foundation.h>


@interface HDHealthRecordParsedHumanName : NSObject

@property (readonly, copy, nonatomic) NSString *family; // ivar: _family
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSArray *given; // ivar: _given
@property (readonly, copy, nonatomic) HKMedicalDateInterval *period; // ivar: _period
@property (readonly, copy, nonatomic) NSArray *prefix; // ivar: _prefix
@property (readonly, copy, nonatomic) NSArray *suffix; // ivar: _suffix
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, copy, nonatomic) NSString *use; // ivar: _use


+(id)parsedNamesWithHumanNames:(id)arg0 FHIRVersion:(id)arg1 error:(*id)arg2 ;
+(id)preferredNameInNames:(id)arg0 FHIRVersion:(id)arg1 ;
-(id)description;
-(id)initWithHumanNameDictionary:(id)arg0 FHIRVersion:(id)arg1 error:(*id)arg2 ;


@end


#endif