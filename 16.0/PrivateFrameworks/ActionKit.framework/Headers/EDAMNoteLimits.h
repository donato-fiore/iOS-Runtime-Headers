// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTELIMITS_H
#define EDAMNOTELIMITS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMNoteLimits : FATObject

@property (retain, nonatomic) NSNumber *noteResourceCountMax; // ivar: _noteResourceCountMax
@property (retain, nonatomic) NSNumber *noteSizeMax; // ivar: _noteSizeMax
@property (retain, nonatomic) NSNumber *resourceSizeMax; // ivar: _resourceSizeMax
@property (retain, nonatomic) NSNumber *uploadLimit; // ivar: _uploadLimit
@property (retain, nonatomic) NSNumber *uploaded; // ivar: _uploaded


+(id)structFields;
+(id)structName;


@end


#endif