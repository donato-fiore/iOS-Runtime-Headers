// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SESTLKRECORD_H
#define SESTLKRECORD_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface SESTLKRecord : NSObject

@property (readonly) NSData *parentTLKUUID; // ivar: _parentTLKUUID
@property (readonly) NSData *recordData; // ivar: _recordData
@property (readonly) NSData *tlkUUID; // ivar: _tlkUUID
@property (readonly) NSString *view; // ivar: _view


+(id)withCKKSExternalKey:(id)arg0 ;
+(id)withView:(id)arg0 tlkUUID:(id)arg1 parentTLKUUID:(id)arg2 recordData:(id)arg3 ;
-(id)asCKKSExternalKey;


@end


#endif