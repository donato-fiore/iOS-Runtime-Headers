// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSQUOTAINFO_H
#define PSQUOTAINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PSQuotaInfo : NSObject {
    NSMutableDictionary *_mediaKindDict;
}


@property (nonatomic) NSUInteger totalStorage; // ivar: _totalStorage
@property (nonatomic) NSUInteger usedStorage; // ivar: _usedStorage


-(NSUInteger)storageInUseForMediaKind:(NSInteger)arg0 ;
-(id)init;
-(void)setStorageInUse:(NSUInteger)arg0 forMediaKind:(NSInteger)arg1 ;


@end


#endif