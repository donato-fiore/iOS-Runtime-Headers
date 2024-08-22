// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATRANSACTION_H
#define DATRANSACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *transactionId; // ivar: _transactionId


-(id)init;
-(id)initWithLabel:(id)arg0 ;
-(void)dealloc;


@end


#endif