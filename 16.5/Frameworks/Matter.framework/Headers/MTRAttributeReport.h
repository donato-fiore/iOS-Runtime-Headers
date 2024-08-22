// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRATTRIBUTEREPORT_H
#define MTRATTRIBUTEREPORT_H

@class NSError;

#import <Foundation/Foundation.h>

#import "MTRAttributePath.h"

@interface MTRAttributeReport : NSObject

@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) MTRAttributePath *path; // ivar: _path
@property (readonly, copy, nonatomic) id *value; // ivar: _value


-(id)initWithPath:(*void)arg0 value:(id)arg1 error:(id)arg2 ;


@end


#endif