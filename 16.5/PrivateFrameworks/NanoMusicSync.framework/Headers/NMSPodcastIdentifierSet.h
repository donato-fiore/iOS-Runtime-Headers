// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTIDENTIFIERSET_H
#define NMSPODCASTIDENTIFIERSET_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NMSPodcastIdentifierSet : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *feedURL; // ivar: _feedURL
@property (readonly, nonatomic) NSNumber *storeID; // ivar: _storeID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPodcastIdentifierSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStoreID:(id)arg0 feedURL:(id)arg1 ;


@end


#endif