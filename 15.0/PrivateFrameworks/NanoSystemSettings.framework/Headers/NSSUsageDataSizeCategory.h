// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSUSAGEDATASIZECATEGORY_H
#define NSSUSAGEDATASIZECATEGORY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NSSSizeVector.h"

@interface NSSUsageDataSizeCategory : NSObject

@property (readonly, retain, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, retain, nonatomic) NSSSizeVector *size; // ivar: _size


-(id)initWithIdentifier:(id)arg0 size:(id)arg1 name:(id)arg2 ;


@end


#endif