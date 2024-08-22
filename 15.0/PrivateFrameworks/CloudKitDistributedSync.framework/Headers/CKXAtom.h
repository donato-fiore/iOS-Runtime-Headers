// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXATOM_H
#define CKXATOM_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>

#import "CKXAtomLocation.h"
#import "CKXDistributedTimestamp.h"

@interface CKXAtom : NSObject

@property (nonatomic) unsigned char atomBehavior; // ivar: _atomBehavior
@property (nonatomic) NSUInteger atomType; // ivar: _atomType
@property (retain, nonatomic) CKXAtomLocation *location; // ivar: _location
@property (retain, nonatomic) NSArray *references; // ivar: _references
@property (retain, nonatomic) CKXDistributedTimestamp *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSData *value; // ivar: _value
@property (nonatomic) NSUInteger version; // ivar: _version




@end


#endif