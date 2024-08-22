// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKKEYVALUEMO_H
#define _DKKEYVALUEMO_H

@class NSManagedObject, NSString;

#import <Foundation/Foundation.h>


@interface _DKKeyValueMO : NSManagedObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSObject *value;


+(id)fetchRequest;


@end


#endif