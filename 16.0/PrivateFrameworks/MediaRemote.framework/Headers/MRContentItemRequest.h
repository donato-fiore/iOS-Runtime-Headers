// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRCONTENTITEMREQUEST_H
#define MRCONTENTITEMREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MRContentItem.h"
#import "MRPlaybackQueueRequest.h"

@interface MRContentItemRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) MRContentItem *item; // ivar: _item
@property (retain, nonatomic) MRPlaybackQueueRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 request:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif