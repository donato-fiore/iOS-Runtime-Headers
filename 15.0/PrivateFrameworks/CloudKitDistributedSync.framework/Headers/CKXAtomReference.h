// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXATOMREFERENCE_H
#define CKXATOMREFERENCE_H


#import <Foundation/Foundation.h>

#import "CKXAtomLocation.h"
#import "CKXDistributedTimestamp.h"

@interface CKXAtomReference : NSObject

@property (retain, nonatomic) CKXAtomLocation *location; // ivar: _location
@property (retain, nonatomic) CKXDistributedTimestamp *timestamp; // ivar: _timestamp
@property (nonatomic) unsigned char type; // ivar: _type




@end


#endif