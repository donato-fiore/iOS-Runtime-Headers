// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODIVENN_H
#define ODIVENN_H


#import <Foundation/Foundation.h>


@interface ODIVenn : NSObject



+(BOOL)mapIdentifier:(id)arg0 state:(id)arg1 ;
+(NSUInteger)nodeCountWithState:(id)arg0 ;
+(struct CGRect )mapGSpaceWithState:(id)arg0 ;
+(void)mapNode:(id)arg0 index:(unsigned int)arg1 state:(id)arg2 ;
+(void)mapWithState:(id)arg0 ;


@end


#endif