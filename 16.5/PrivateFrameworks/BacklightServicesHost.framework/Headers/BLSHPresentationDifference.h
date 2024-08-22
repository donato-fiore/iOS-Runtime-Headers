// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHPRESENTATIONDIFFERENCE_H
#define BLSHPRESENTATIONDIFFERENCE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BLSHPresentationDifference : NSObject

@property (readonly, nonatomic) BOOL hasChanges; // ivar: _hasChanges
@property (readonly, nonatomic) NSArray *insertions; // ivar: _insertions
@property (readonly, nonatomic) NSArray *removals; // ivar: _removals


-(id)description;
-(id)initWithHasChanges:(BOOL)arg0 insertedEnvironments:(id)arg1 removedEnvironments:(id)arg2 ;


@end


#endif