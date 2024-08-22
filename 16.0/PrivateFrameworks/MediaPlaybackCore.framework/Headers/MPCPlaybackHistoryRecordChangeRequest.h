// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCPLAYBACKHISTORYRECORDCHANGEREQUEST_H
#define MPCPLAYBACKHISTORYRECORDCHANGEREQUEST_H

@class MPModelGenericObject, MPModelPlayEvent;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying>



@property (nonatomic) BOOL allowsStoreContainerImport; // ivar: _allowsStoreContainerImport
@property (retain, nonatomic) MPModelGenericObject *itemGenericObject; // ivar: _itemGenericObject
@property (retain, nonatomic) MPModelPlayEvent *playEvent; // ivar: _playEvent
@property (nonatomic) NSInteger type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif