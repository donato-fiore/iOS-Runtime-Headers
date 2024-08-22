// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASBULLETINSTORE_H
#define ASBULLETINSTORE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ASBulletinStore : NSObject

@property (readonly, nonatomic) NSArray *bulletins; // ivar: _bulletins


-(void)_persistBulletins;
-(void)addBulletins:(id)arg0 ;
-(void)loadBulletins;
-(void)removeAllBulletins;
-(void)removeBulletinsMatchingCriteria:(id)arg0 ;
-(void)removeBulletinsOlderThanInterval:(CGFloat)arg0 ;


@end


#endif