// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOMPLETIONSRESPONSE_H
#define SUCOMPLETIONSRESPONSE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SUCompletionsResponse : NSObject

@property (readonly, nonatomic) NSArray *completionItems; // ivar: _completionItems
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithPropertyList:(id)arg0 ;
-(void)dealloc;


@end


#endif