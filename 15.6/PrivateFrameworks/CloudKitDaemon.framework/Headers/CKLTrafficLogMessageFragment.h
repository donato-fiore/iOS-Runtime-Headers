// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKLTRAFFICLOGMESSAGEFRAGMENT_H
#define CKLTRAFFICLOGMESSAGEFRAGMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKLTrafficLogMessageFragment : NSObject

@property (readonly, nonatomic) NSString *dataString; // ivar: _dataString
@property (readonly, nonatomic) NSInteger seqNum; // ivar: _seqNum
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


-(id)description;
-(id)initWithMessage:(id)arg0 ;


@end


#endif