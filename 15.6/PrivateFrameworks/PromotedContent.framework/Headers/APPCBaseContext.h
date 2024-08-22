// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPCBASECONTEXT_H
#define APPCBASECONTEXT_H

@class NSArray, NSUUID, NSString;
@protocol APPCPromotableBaseContext, APPCPromotableContentDepiction;

#import <Foundation/Foundation.h>


@interface APPCBaseContext : NSObject <APPCPromotableBaseContext>

 {
    ? adjacentInternal;
    ? identifier;
    ? next;
    ? adjacent;
    ? requestedAd;
}


@property (nonatomic, readonly) NSArray *adjacent;
@property (nonatomic, readonly) NSObject<APPCPromotableContentDepiction> *current; // ivar: current
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) CGSize maxSize; // ivar: maxSize
@property (nonatomic, readonly) NSArray *next;
@property (nonatomic, copy) NSString *requestedAd;


-(id)init;
-(id)initWithMaxSize:(struct CGSize )arg0 requestedAd:(id)arg1 current:(id)arg2 adjacent:(id)arg3 ;
-(id)initWithMaxSize:(struct CGSize )arg0 requestedAd:(id)arg1 current:(id)arg2 next:(id)arg3 ;


@end


#endif