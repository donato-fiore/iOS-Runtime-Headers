// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMNEBULAKEEPALIVECONTROLLER_H
#define CAMNEBULAKEEPALIVECONTROLLER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMNebulaKeepAliveController : NSObject

@property (nonatomic, setter=_setDidCreateKeepAliveDirectory:) BOOL _didCreateKeepAliveDirectory; // ivar: __didCreateKeepAliveDirectory
@property (nonatomic, setter=_setNebuladKeepAliveFileDescriptor:) int _nebuladKeepAliveFileDescriptor; // ivar: __nebuladKeepAliveFileDescriptor
@property (readonly, nonatomic) NSMutableSet *_nebuladKeepAliveIdentifiers; // ivar: __nebuladKeepAliveIdentifiers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_syncQueue; // ivar: __syncQueue


-(id)_keepAliveFilePath;
-(id)init;
-(void)removeKeepAliveFileIfNotKeptForAnyIdentifiers;
-(void)startKeepAliveForIdentifier:(id)arg0 ;
-(void)stopKeepAliveForIdentifier:(id)arg0 ;


@end


#endif