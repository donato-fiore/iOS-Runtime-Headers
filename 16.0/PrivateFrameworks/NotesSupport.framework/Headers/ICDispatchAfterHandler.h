// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDISPATCHAFTERHANDLER_H
#define ICDISPATCHAFTERHANDLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICDispatchAfterHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierBlockMap; // ivar: _identifierBlockMap


+(id)appLifeCycleHandler;
-(id)identifierForStringIdentifier:(id)arg0 ;
-(id)init;
-(void)cancelAll;
-(void)cancelBlocksWithStringIdentifier:(id)arg0 ;
-(void)dispatchAfter:(CGFloat)arg0 stringIdentifier:(id)arg1 withBlock:(id)arg2 ;


@end


#endif