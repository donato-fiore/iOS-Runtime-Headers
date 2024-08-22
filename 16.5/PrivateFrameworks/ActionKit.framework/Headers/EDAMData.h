// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMDATA_H
#define EDAMDATA_H

@class NSData, NSNumber;


#import "FATObject.h"

@interface EDAMData : FATObject

@property (retain, nonatomic) NSData *body; // ivar: _body
@property (retain, nonatomic) NSData *bodyHash; // ivar: _bodyHash
@property (retain, nonatomic) NSNumber *size; // ivar: _size


+(id)structFields;
+(id)structName;


@end


#endif