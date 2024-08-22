// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCKMETADATAENTRY_H
#define NSCKMETADATAENTRY_H

@class NSNumber, NSDate, NSString;
@protocol NSSecureCoding;


#import "NSManagedObject.h"

@interface NSCKMetadataEntry : NSManagedObject

@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSNumber *boolValueNum;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSNumber *integerValue;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSObject<NSSecureCoding> *transformedValue;


+(id)entityPath;


@end


#endif