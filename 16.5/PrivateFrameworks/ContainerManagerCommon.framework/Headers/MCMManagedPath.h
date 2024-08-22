// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMMANAGEDPATH_H
#define MCMMANAGEDPATH_H

@class NSString, NSURL;
@protocol MCMManagedPath;

#import <Foundation/Foundation.h>

#import "MCMFSNode.h"
#import "MCMPOSIXUser.h"

@interface MCMManagedPath : NSObject <MCMManagedPath>



@property (readonly, nonatomic) NSUInteger ACLConfig; // ivar: _ACLConfig
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int dpClass; // ivar: _dpClass
@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (retain, nonatomic) MCMFSNode *fsNode; // ivar: _fsNode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned short mode; // ivar: _mode
@property (readonly, nonatomic) MCMPOSIXUser *owner; // ivar: _owner
@property (readonly, nonatomic) NSObject<MCMManagedPath> *parent; // ivar: _parent
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToManagedPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURL:(id)arg0 flags:(NSUInteger)arg1 ACLConfig:(NSUInteger)arg2 mode:(unsigned short)arg3 dpClass:(int)arg4 owner:(id)arg5 parent:(id)arg6 ;
-(id)managedPathByAppendingPathComponent:(id)arg0 flags:(NSUInteger)arg1 ACLConfig:(NSUInteger)arg2 mode:(unsigned short)arg3 dpClass:(int)arg4 owner:(id)arg5 ;


@end


#endif