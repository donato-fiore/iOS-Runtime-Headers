// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTBULLETINSTORAGESECTION_H
#define BLTBULLETINSTORAGESECTION_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface BLTBulletinStorageSection : NSObject

@property (readonly, nonatomic) NSMutableDictionary *bulletinIDToBulletin; // ivar: _bulletinIDToBulletin
@property (readonly, nonatomic) NSMutableArray *bulletins; // ivar: _bulletins
@property (readonly, nonatomic) NSUInteger maxContextSize; // ivar: _maxContextSize
@property (readonly, nonatomic) NSUInteger totalContextSize; // ivar: _totalContextSize


-(id)addOrReplaceBulletin:(id)arg0 ;
-(id)initWithMaxContextSize:(NSUInteger)arg0 ;
-(void)removeBulletin:(id)arg0 ;


@end


#endif