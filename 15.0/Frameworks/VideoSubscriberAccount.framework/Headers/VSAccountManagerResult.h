// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSACCOUNTMANAGERRESULT_H
#define VSACCOUNTMANAGERRESULT_H

@class NSOperation;

#import <Foundation/Foundation.h>


@interface VSAccountManagerResult : NSObject

@property (retain, nonatomic) NSOperation *operation; // ivar: _operation


-(id)init;
-(id)initWithOperation:(id)arg0 ;
-(void)cancel;


@end


#endif