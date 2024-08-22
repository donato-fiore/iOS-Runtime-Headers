// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMPUBLISHING_H
#define EDAMPUBLISHING_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMPublishing : FATObject

@property (retain, nonatomic) NSNumber *ascending; // ivar: _ascending
@property (retain, nonatomic) NSNumber *order; // ivar: _order
@property (retain, nonatomic) NSString *publicDescription; // ivar: _publicDescription
@property (retain, nonatomic) NSString *uri; // ivar: _uri


+(id)structFields;
+(id)structName;


@end


#endif