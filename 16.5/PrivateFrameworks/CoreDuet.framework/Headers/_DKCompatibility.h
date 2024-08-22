// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKCOMPATIBILITY_H
#define _DKCOMPATIBILITY_H


#import <Foundation/Foundation.h>


@interface _DKCompatibility : NSObject

@property (nonatomic) NSInteger max; // ivar: _max
@property (nonatomic) NSInteger min; // ivar: _min


+(id)compatibilityFromSerializedCompatibility:(id)arg0 ;
+(id)compatibilityWithMinVersion:(NSInteger)arg0 maxVersion:(NSInteger)arg1 ;
+(id)currentCompatibility;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)eventPredicate;
-(id)filterIncompatibleEvents:(id)arg0 ;
-(id)serialize;


@end


#endif