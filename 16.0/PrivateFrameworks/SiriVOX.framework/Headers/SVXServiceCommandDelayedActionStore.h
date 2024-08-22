// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSERVICECOMMANDDELAYEDACTIONSTORE_H
#define SVXSERVICECOMMANDDELAYEDACTIONSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SVXServiceCommandDelayedActionStore : NSObject {
    NSMutableDictionary *_actionsByKey;
}




-(id)actionForKey:(id)arg0 ;
-(id)init;
-(void)removeActionForKey:(id)arg0 ;
-(void)removeAllActions;
-(void)setAction:(id)arg0 forKey:(id)arg1 ;


@end


#endif