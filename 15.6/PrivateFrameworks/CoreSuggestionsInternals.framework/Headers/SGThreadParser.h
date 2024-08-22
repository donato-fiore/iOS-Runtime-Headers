// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGTHREADPARSER_H
#define SGTHREADPARSER_H


#import <Foundation/Foundation.h>


@interface SGThreadParser : NSObject



+(id)emailFrom:(id)arg0 ;
+(id)emailFrom:(id)arg0 entity:(id)arg1 ;
+(id)ipsosMessageWithSearchableItem:(id)arg0 ;
+(id)nextMessage:(id)arg0 ;
+(id)nextMessage:(id)arg0 entity:(id)arg1 ;
+(id)stripChevrons:(id)arg0 ;
+(void)enumeratePreviousMessages:(id)arg0 inEntity:(id)arg1 usingBlock:(id)arg2 ;
+(void)enumeratePreviousMessages:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif