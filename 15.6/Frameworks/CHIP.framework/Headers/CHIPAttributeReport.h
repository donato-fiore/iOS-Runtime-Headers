// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPATTRIBUTEREPORT_H
#define CHIPATTRIBUTEREPORT_H

@class NSError;

#import <Foundation/Foundation.h>

#import "CHIPAttributePath.h"

@interface CHIPAttributeReport : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CHIPAttributePath *path; // ivar: _path
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithPath:(*void)arg0 value:(id)arg1 error:(id)arg2 ;


@end


#endif