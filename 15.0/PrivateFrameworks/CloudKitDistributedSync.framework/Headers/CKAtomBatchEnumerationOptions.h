// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATOMBATCHENUMERATIONOPTIONS_H
#define CKATOMBATCHENUMERATIONOPTIONS_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "CKAtomLocation.h"

@interface CKAtomBatchEnumerationOptions : NSObject

@property (retain, nonatomic) NSIndexSet *includedIndexes; // ivar: _includedIndexes
@property (retain, nonatomic) CKAtomLocation *includedLocation; // ivar: _includedLocation


-(id)initWithIncludedIndexes:(id)arg0 ;
-(id)initWithIncludedLocation:(id)arg0 ;


@end


#endif