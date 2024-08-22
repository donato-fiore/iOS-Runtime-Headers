// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCCONTEXTBUILDER_H
#define APPCCONTEXTBUILDER_H

@class NSArray, NSUUID, NSString;
@protocol APPCPromotableBaseContext, APPCPromotableContentDepiction;

#import <Foundation/Foundation.h>

#import "APPCContext.h"
#import "APPCNewsSupplementalContext.h"

@interface APPCContextBuilder : NSObject <APPCPromotableBaseContext>

 {
    ? identifier;
    ? next;
    ? requestedAd;
    ? resourceLock;
    ? adjacentInternal;
}


@property (nonatomic, readonly) NSArray *adjacent;
@property (nonatomic, readonly) APPCContext *context;
@property (nonatomic, retain) NSObject<APPCPromotableContentDepiction> *current; // ivar: current
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) CGSize maxSize; // ivar: maxSize
@property (nonatomic, retain) APPCNewsSupplementalContext *newsContext; // ivar: newsContext
@property (nonatomic, copy) NSArray *next;
@property (nonatomic, copy) NSString *requestedAd;


-(BOOL)addAdjacentWithAdjacent:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithMaxSize:(struct CGSize )arg0 current:(id)arg1 newsContext:(id)arg2 requestedAd:(id)arg3 ;
-(id)initWithMaxSize:(struct CGSize )arg0 current:(id)arg1 next:(id)arg2 newsContext:(id)arg3 requestedAd:(id)arg4 ;
-(void)removeAdjacentWithAdjacent:(id)arg0 ;


@end


#endif