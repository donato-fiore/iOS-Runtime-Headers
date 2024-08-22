// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CKACKNOWLEDGMENTTALLY_H
#define _CKACKNOWLEDGMENTTALLY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _CKAcknowledgmentTally : NSObject

@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (copy, nonatomic) NSArray *senders; // ivar: _senders
@property (nonatomic) NSInteger type; // ivar: _type


-(id)description;
-(id)initWithType:(NSInteger)arg0 senders:(id)arg1 ;


@end


#endif