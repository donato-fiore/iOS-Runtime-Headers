// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDUPLICATESET_H
#define CNDUPLICATESET_H

@class NSManagedObject, NSSet, NSString;


#import "CNDuplicateSetContactImage.h"

@interface CNDuplicateSet : NSManagedObject

@property (nonatomic, retain) NSSet *cohorts;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL isIgnored;
@property (nonatomic, copy) NSString *primaryID;
@property (nonatomic, retain) CNDuplicateSetContactImage *selectedContactImage;
@property (nonatomic, copy) NSString *signature;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif