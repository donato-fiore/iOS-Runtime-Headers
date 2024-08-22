// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXACTIVITYCOORDINATORRECORD_H
#define PXACTIVITYCOORDINATORRECORD_H

@protocol PXActivityCoordinatorItem;

#import <Foundation/Foundation.h>


@interface PXActivityCoordinatorRecord : NSObject

@property (weak, nonatomic) NSObject<PXActivityCoordinatorItem> *item; // ivar: _item


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;


@end


#endif