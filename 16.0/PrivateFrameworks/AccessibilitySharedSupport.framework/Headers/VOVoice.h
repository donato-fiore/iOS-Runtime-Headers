// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOVOICE_H
#define VOVOICE_H

@class NSManagedObject, NSString, NSData;


#import "VOSubstitution.h"

@interface VOVoice : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) VOSubstitution *substitution;
@property (copy, nonatomic) NSString *voiceID;


+(id)fetchRequest;


@end


#endif