// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUEOBSERVATIONINFO_H
#define NSKEYVALUEOBSERVATIONINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NSKeyValueObservationInfo : NSObject {
    NSArray *_observances;
    NSUInteger _cachedHash;
    BOOL _cachedIsShareable;
}


@property (readonly, nonatomic) BOOL containsOnlyInternalObservationHelpers;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_copyByAddingObservance:(id)arg0 ;
-(id)_initWithObservances:(*id)arg0 count:(NSUInteger)arg1 hashValue:(NSUInteger)arg2 ;
-(id)description;
-(void)dealloc;


@end


#endif