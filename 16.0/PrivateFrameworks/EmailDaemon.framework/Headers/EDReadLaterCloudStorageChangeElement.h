// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDREADLATERCLOUDSTORAGECHANGEELEMENT_H
#define EDREADLATERCLOUDSTORAGECHANGEELEMENT_H

@class NSDate, ECAngleBracketIDHash;

#import <Foundation/Foundation.h>


@interface EDReadLaterCloudStorageChangeElement : NSObject

@property (readonly, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (readonly, nonatomic) ECAngleBracketIDHash *messageID; // ivar: _messageID
@property (readonly, nonatomic) NSDate *readLaterDate; // ivar: _readLaterDate


-(id)initWithMessageID:(id)arg0 readLaterDate:(id)arg1 displayDate:(id)arg2 ;


@end


#endif