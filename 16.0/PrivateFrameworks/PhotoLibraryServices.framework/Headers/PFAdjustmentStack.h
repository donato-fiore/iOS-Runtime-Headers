// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFADJUSTMENTSTACK_H
#define PFADJUSTMENTSTACK_H

@class NSArray, NSOrderedSet;
@protocol NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration>

 {
    NSArray *_adjustments;
    NSOrderedSet *_maskUUIDs;
    NSUInteger _formatVersion;
}




+(BOOL)isValidEnvelopeDictionary:(id)arg0 errors:(id)arg1 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)adjustmentAtIndex:(NSUInteger)arg0 ;
-(id)adjustmentsWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)envelopeDictionary;
-(id)firstAdjustmentWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithAdjustments:(id)arg0 ;
-(id)initWithEnvelopeDictionary:(id)arg0 ;
-(id)maskUUIDs;


@end


#endif