// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPHOMESHARINGARTWORKCACHEKEY_H
#define _MPHOMESHARINGARTWORKCACHEKEY_H


#import <Foundation/Foundation.h>


@interface _MPHomeSharingArtworkCacheKey : NSObject

@property (readonly, nonatomic) NSUInteger persistentID; // ivar: _persistentID
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPersistentID:(NSUInteger)arg0 size:(struct CGSize )arg1 ;


@end


#endif