// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDANONYMOUSZONEDATAOBJECT_H
#define CKDANONYMOUSZONEDATAOBJECT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CKDAnonymousZoneDataObject : NSObject

@property (readonly, nonatomic) int changeType; // ivar: _changeType
@property (readonly, nonatomic) int deleteType; // ivar: _deleteType
@property (readonly, nonatomic) NSData *encryptedTupleData; // ivar: _encryptedTupleData


-(id)initWithEncryptedData:(id)arg0 ;
-(id)initWithEncryptedData:(id)arg0 changeType:(int)arg1 deleteType:(int)arg2 ;


@end


#endif