// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLJALISCOBOOKLETITEM_H
#define BLJALISCOBOOKLETITEM_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface BLJaliscoBookletItem : NSObject

@property (copy, nonatomic) NSNumber *size; // ivar: _size
@property (copy, nonatomic) NSString *storeDownloadParameters; // ivar: _storeDownloadParameters
@property (copy, nonatomic) NSString *storeID; // ivar: _storeID
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)arrayWithServerBookletItems:(id)arg0 ;
+(id)itemWithServerBookletItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif