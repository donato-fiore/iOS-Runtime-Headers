// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCDISPATCHAFTERHANDLER_H
#define DCDISPATCHAFTERHANDLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DCDispatchAfterHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierBlockMap; // ivar: _identifierBlockMap


+(id)appLifeCycleHandler;
-(id)identifierForStringIdentifier:(id)arg0 ;
-(id)init;
-(void)cancelAll;
-(void)cancelBlocksWithStringIdentifier:(id)arg0 ;
-(void)dispatchAfter:(CGFloat)arg0 stringIdentifier:(id)arg1 withBlock:(id)arg2 ;


@end


#endif