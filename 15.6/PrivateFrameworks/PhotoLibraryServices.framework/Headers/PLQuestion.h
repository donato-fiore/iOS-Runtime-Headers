// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLQUESTION_H
#define PLQUESTION_H

@class NSDictionary, NSDate, NSString;


#import "PLManagedObject.h"

@interface PLQuestion : PLManagedObject

@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned short displayType;
@property (retain, nonatomic) NSString *entityIdentifier;
@property (nonatomic) unsigned short entityType;
@property (nonatomic) CGFloat score;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short type;
@property (retain, nonatomic) NSString *uuid;


+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 withUUID:(id)arg1 ;
-(void)delete;


@end


#endif