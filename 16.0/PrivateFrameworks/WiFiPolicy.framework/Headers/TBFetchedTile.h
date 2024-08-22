// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBFETCHEDTILE_H
#define TBFETCHEDTILE_H

@class NSDate, NSString;
@protocol TBTile, NSCopying;

#import <Foundation/Foundation.h>


@interface TBFetchedTile : NSObject <TBTile, NSCopying>



@property (copy, nonatomic) NSDate *created; // ivar: _created
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger key; // ivar: _key
@property (readonly, nonatomic) NSUInteger networkCount;
@property (readonly) Class superclass;


+(id)fetchedTileWithKey:(NSUInteger)arg0 etag:(id)arg1 created:(id)arg2 ;
-(BOOL)_isEqualToFetchedTile:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKey:(NSUInteger)arg0 etag:(id)arg1 created:(id)arg2 ;


@end


#endif