// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMAGAZINEGENRE_H
#define FCMAGAZINEGENRE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCMagazineGenre : NSObject <NSCopying>



@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription


+(id)magazineGenreWithGenre:(id)arg0 localizedDescription:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithGenre:(id)arg0 localizedDescription:(id)arg1 ;


@end


#endif