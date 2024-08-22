// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDAMESSAGEHEADERFETCHCONSUMER_H
#define _MFDAMESSAGEHEADERFETCHCONSUMER_H

@class NSData, NSString;
@protocol MFDASyncResponseConsumer;

#import <Foundation/Foundation.h>

#import "MFError.h"
#import "MFDAMessageStore.h"

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFDAMessageStore *store; // ivar: _store
@property (readonly, nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly) Class superclass;


-(BOOL)wantsData;
-(void)handleResponse:(id)arg0 error:(id)arg1 ;


@end


#endif