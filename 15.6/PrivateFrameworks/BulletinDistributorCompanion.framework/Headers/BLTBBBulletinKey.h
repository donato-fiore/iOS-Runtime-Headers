// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTBBBULLETINKEY_H
#define BLTBBBULLETINKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLTBBBulletinKey : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *publisherMatchID; // ivar: _publisherMatchID
@property (readonly, copy, nonatomic) NSString *sectionID; // ivar: _sectionID


+(id)bulletinKeyWithSectionID:(id)arg0 publisherMatchID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSectionID:(id)arg0 publisherMatchID:(id)arg1 ;
-(id)keyString;


@end


#endif