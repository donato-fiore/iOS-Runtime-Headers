// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFOBJECTCKRECORDZONELINK_H
#define _PFOBJECTCKRECORDZONELINK_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"

@interface _PFObjectCKRecordZoneLink : NSObject <NSCopying>



@property (readonly, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) NSString *recordName; // ivar: _recordName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjectID:(id)arg0 recordName:(id)arg1 ;
-(void)dealloc;


@end


#endif