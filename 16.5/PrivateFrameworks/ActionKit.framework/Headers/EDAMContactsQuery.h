// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMCONTACTSQUERY_H
#define EDAMCONTACTSQUERY_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMContactsQuery : FATObject

@property (retain, nonatomic) NSNumber *maxEntries; // ivar: _maxEntries
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix


+(id)structFields;
+(id)structName;


@end


#endif