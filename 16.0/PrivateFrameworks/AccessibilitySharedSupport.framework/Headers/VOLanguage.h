// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOLANGUAGE_H
#define VOLANGUAGE_H

@class NSManagedObject, NSString, NSData;


#import "VOSubstitution.h"

@interface VOLanguage : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *languageID;
@property (retain, nonatomic) VOSubstitution *substitution;


+(id)fetchRequest;


@end


#endif