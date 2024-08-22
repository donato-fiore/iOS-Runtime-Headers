// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORELOGRECORD_H
#define HMDBACKINGSTORELOGRECORD_H

@class NSData, CKRecordID;

#import <Foundation/Foundation.h>


@interface HMDBackingStoreLogRecord : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSInteger encoding; // ivar: _encoding
@property (readonly, nonatomic) NSInteger pushed; // ivar: _pushed
@property (readonly, nonatomic) CKRecordID *root; // ivar: _root
@property (readonly, nonatomic) NSInteger rowID; // ivar: _rowID
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger xactID; // ivar: _xactID


-(id)description;
-(id)initWithArray:(id)arg0 ;


@end


#endif