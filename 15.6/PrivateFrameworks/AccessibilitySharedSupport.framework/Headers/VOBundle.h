// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOBUNDLE_H
#define VOBUNDLE_H

@class NSManagedObject, NSString, NSData;


#import "VOSubstitution.h"

@interface VOBundle : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) VOSubstitution *iOSSubstitution;
@property (retain, nonatomic) VOSubstitution *macOSSubstitution;


+(id)fetchRequest;


@end


#endif