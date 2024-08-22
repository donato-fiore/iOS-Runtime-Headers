// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC23MAPSSYNCMUTABLEBASEITEM_H
#define _TTC8MAPSSYNC23MAPSSYNCMUTABLEBASEITEM_H

@class NSManagedObjectContext, NSDate, NSUUID, NSManagedObject;

#import <Foundation/Foundation.h>


@interface _TtC8MapsSync23MapsSyncMutableBaseItem : NSObject {
    ? _proxyObject;
}


@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, readonly) NSManagedObject *proxyObject;


-(id)init;
-(id)initWithProxyObject:(id)arg0 ;


@end


#endif