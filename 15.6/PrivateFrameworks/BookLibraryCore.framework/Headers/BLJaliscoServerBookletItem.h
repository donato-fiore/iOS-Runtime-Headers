// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLJALISCOSERVERBOOKLETITEM_H
#define BLJALISCOSERVERBOOKLETITEM_H

@class NSManagedObject, NSNumber, NSString;


#import "BLJaliscoServerItem.h"

@interface BLJaliscoServerBookletItem : NSManagedObject

@property (retain, nonatomic) BLJaliscoServerItem *parentItem;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSString *storeDownloadParameters;
@property (retain, nonatomic) NSString *storeID;
@property (retain, nonatomic) NSString *title;


-(id)initIntoManagedObjectContext:(id)arg0 ;


@end


#endif