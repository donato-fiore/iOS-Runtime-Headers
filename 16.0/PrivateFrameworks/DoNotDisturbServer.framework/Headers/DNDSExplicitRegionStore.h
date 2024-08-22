// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSEXPLICITREGIONSTORE_H
#define DNDSEXPLICITREGIONSTORE_H

@class NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDSExplicitRegionStore : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSSet *enteredRegionIdentifiersPendingExit; // ivar: _enteredRegionIdentifiersPendingExit


+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithEnteredRegionIdentifiersPendingExit:(id)arg0 ;
-(id)_initWithStore:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif