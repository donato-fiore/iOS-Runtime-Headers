// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTLIGHTSANDSIRENSREPLYINFO_H
#define BLTLIGHTSANDSIRENSREPLYINFO_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface BLTLightsAndSirensReplyInfo : NSObject

@property (retain, nonatomic) NSDate *bulletinPublicationDate; // ivar: _bulletinPublicationDate
@property (readonly, nonatomic) NSDate *creation; // ivar: _creation
@property (nonatomic) BOOL didLogAggd; // ivar: _didLogAggd
@property (nonatomic) NSUInteger didPlayLightsAndSirens; // ivar: _didPlayLightsAndSirens
@property (copy, nonatomic) NSString *publisherMatchID; // ivar: _publisherMatchID
@property (copy, nonatomic) id *reply; // ivar: _reply
@property (readonly, nonatomic) BOOL replySent; // ivar: _replySent
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID


-(BOOL)hasExpired;
-(BOOL)sendReply;
-(id)init;


@end


#endif