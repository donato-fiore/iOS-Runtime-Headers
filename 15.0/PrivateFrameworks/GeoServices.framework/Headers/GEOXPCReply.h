// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOXPCREPLY_H
#define GEOXPCREPLY_H

@class NSString, NSError;
@protocol GEOXPCSerializable, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface GEOXPCReply : NSObject <GEOXPCSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) unsigned char flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_xpc_object> *object; // ivar: _object
@property (readonly, nonatomic) NSObject<OS_xpc_object> *replyDictionary;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;
-(void)send;


@end


#endif