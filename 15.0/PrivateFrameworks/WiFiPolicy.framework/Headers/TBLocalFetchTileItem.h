// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBLOCALFETCHTILEITEM_H
#define TBLOCALFETCHTILEITEM_H

@class NSString, NSError, NSArray;
@protocol TBFetchResponseTileItem, TBTile;

#import <Foundation/Foundation.h>


@interface TBLocalFetchTileItem : NSObject <TBFetchResponseTileItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *networks; // ivar: _networks
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TBTile> *tile; // ivar: _tile


-(id)initWithTile:(id)arg0 error:(id)arg1 ;


@end


#endif