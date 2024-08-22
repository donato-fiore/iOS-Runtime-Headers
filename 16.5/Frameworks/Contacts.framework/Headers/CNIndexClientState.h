// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNINDEXCLIENTSTATE_H
#define CNINDEXCLIENTSTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNChangeHistoryAnchor.h"

@interface CNIndexClientState : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger fullSyncOffset; // ivar: _fullSyncOffset
@property (retain, nonatomic) CNChangeHistoryAnchor *fullSyncSnapshotAnchor; // ivar: _fullSyncSnapshotAnchor
@property (nonatomic) NSInteger indexVersion; // ivar: _indexVersion
@property (nonatomic) BOOL isFullSyncDone; // ivar: _isFullSyncDone


+(BOOL)supportsSecureCoding;
+(id)clientStateWithData:(id)arg0 logger:(id)arg1 ;
-(id)data;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif