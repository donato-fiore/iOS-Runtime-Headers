// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCLOCALREGION_H
#define FCLOCALREGION_H

@class NSMutableSet, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FCLocalRegion : NSObject

@property (retain, nonatomic) NSMutableSet *areas; // ivar: _areas
@property (readonly, nonatomic) NSArray *autoFavoriteTagIDs; // ivar: _autoFavoriteTagIDs
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *localVersionedTagIDs; // ivar: _localVersionedTagIDs
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGRect rect; // ivar: _rect


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)addLocalArea:(id)arg0 ;


@end


#endif