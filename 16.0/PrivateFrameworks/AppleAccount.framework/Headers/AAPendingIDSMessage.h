// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAPENDINGIDSMESSAGE_H
#define AAPENDINGIDSMESSAGE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface AAPendingIDSMessage : NSObject

@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initCustodianMessageFrom:(id)arg0 data:(id)arg1 ;
-(id)initInheritanceMessageFrom:(id)arg0 data:(id)arg1 ;


@end


#endif