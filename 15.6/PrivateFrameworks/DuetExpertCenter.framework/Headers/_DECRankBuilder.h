// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECRANKBUILDER_H
#define _DECRANKBUILDER_H

@class NSString;
@protocol _DECRankBuilder;

#import <Foundation/Foundation.h>


@interface _DECRankBuilder : NSObject <_DECRankBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)rankResults:(id)arg0 limit:(NSUInteger)arg1 ;


@end


#endif