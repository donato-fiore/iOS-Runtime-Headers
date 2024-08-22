// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JETREATMENTACTION_H
#define JETREATMENTACTION_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface JETreatmentAction : NSObject {
    BOOL _blacklisted;
    NSString *_field;
    NSString *_sourceField;
    id *_overrideFieldValue;
    NSArray *_blacklistedFields;
    NSArray *_whitelistedFields;
    NSDictionary *_fieldsMap;
    NSDictionary *_extractAndReplaceConfig;
    NSArray *_destinationKeyPath;
    NSArray *_sourceKeyPath;
}




+(id)treatmentActionWithField:(id)arg0 configuration:(id)arg1 topic:(id)arg2 ;
-(id)initWithField:(id)arg0 configuration:(id)arg1 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;
-(void)performActionWithContext:(id)arg0 ;


@end


#endif