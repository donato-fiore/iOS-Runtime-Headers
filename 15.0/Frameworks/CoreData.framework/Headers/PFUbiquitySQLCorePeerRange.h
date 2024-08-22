// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYSQLCOREPEERRANGE_H
#define PFUBIQUITYSQLCOREPEERRANGE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PFUbiquitySQLCorePeerRange : NSObject {
    NSString *_owningPeerID;
    NSString *_entityName;
    NSNumber *_rangeStart;
    NSNumber *_rangeEnd;
    NSNumber *_peerStart;
    NSNumber *_peerEnd;
}




-(id)description;
-(id)initWithOwningPeerID:(id)arg0 entityName:(id)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 peerStart:(id)arg4 peerEnd:(id)arg5 ;
-(void)dealloc;


@end


#endif