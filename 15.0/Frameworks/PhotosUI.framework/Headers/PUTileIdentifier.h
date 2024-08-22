// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTILEIDENTIFIER_H
#define PUTILEIDENTIFIER_H

@class NSString, NSIndexPath;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUTileIdentifier : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSString *dataSourceIdentifier; // ivar: _dataSourceIdentifier
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) NSString *tileKind; // ivar: _tileKind


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIndexPath:(id)arg0 tileKind:(id)arg1 dataSourceIdentifier:(id)arg2 ;


@end


#endif