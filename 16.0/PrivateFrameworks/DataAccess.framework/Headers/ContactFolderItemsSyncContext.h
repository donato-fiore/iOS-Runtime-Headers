// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CONTACTFOLDERITEMSSYNCCONTEXT_H
#define CONTACTFOLDERITEMSSYNCCONTEXT_H

@class CNChangeHistoryAnchor;

#import <Foundation/Foundation.h>


@interface ContactFolderItemsSyncContext : NSObject

@property (nonatomic) int abGroupChangeId; // ivar: _abGroupChangeId
@property (nonatomic) int abPersonChangeId; // ivar: _abPersonChangeId
@property (nonatomic, getter=isChangeHistoryTruncated) BOOL changeHistoryTruncated; // ivar: _changeHistoryTruncated
@property (retain, nonatomic) CNChangeHistoryAnchor *cnChangeAnchor; // ivar: _cnChangeAnchor
@property (nonatomic) NSUInteger latestSequenceNumber; // ivar: _latestSequenceNumber


-(id)init;


@end


#endif