// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUUUIDLOGCONTEXT_H
#define TSUUUIDLOGCONTEXT_H

@class NSString;
@protocol TSULogContext;

#import <Foundation/Foundation.h>


@interface TSUUUIDLogContext : NSObject <TSULogContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *privateString; // ivar: _privateString
@property (readonly) NSString *publicString; // ivar: _publicString
@property (readonly) Class superclass;


-(id)init;


@end


#endif