// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTREATMENTACTION_H
#define MTTREATMENTACTION_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MTTreatmentAction : NSObject

@property (nonatomic) BOOL blacklisted; // ivar: _blacklisted
@property (retain, nonatomic) NSArray *blacklistedFields; // ivar: _blacklistedFields
@property (retain, nonatomic) NSArray *dstKeyPath; // ivar: _dstKeyPath
@property (retain, nonatomic) NSString *field; // ivar: _field
@property (retain, nonatomic) NSDictionary *fieldsMap; // ivar: _fieldsMap
@property (retain, nonatomic) id *overrideFieldValue; // ivar: _overrideFieldValue
@property (retain, nonatomic) NSString *sourceField; // ivar: _sourceField
@property (retain, nonatomic) NSArray *srcKeyPath; // ivar: _srcKeyPath
@property (retain, nonatomic) NSArray *whitelistedFields; // ivar: _whitelistedFields


+(id)treatmentActionWithField:(id)arg0 configData:(id)arg1 ;
-(id)initWithField:(id)arg0 configDictionary:(id)arg1 ;
-(id)performAction:(id)arg0 atKeyIndex:(NSInteger)arg1 context:(id)arg2 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;
-(void)computeKeyPaths;
-(void)performActionWithContext:(id)arg0 ;


@end


#endif