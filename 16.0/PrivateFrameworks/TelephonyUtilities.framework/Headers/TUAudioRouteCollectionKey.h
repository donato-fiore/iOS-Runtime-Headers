// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUAUDIOROUTECOLLECTIONKEY_H
#define TUAUDIOROUTECOLLECTIONKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TUAudioRouteCollectionKey : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *mode; // ivar: _mode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAudioRouteCollectionKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCategory:(id)arg0 mode:(id)arg1 ;


@end


#endif