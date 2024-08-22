// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKDISPLAYLINKMANAGEROBSERVER_H
#define TKDISPLAYLINKMANAGEROBSERVER_H


#import <Foundation/Foundation.h>


@interface TKDisplayLinkManagerObserver : NSObject {
    id *_block;
    NSUInteger _frameInterval;
    NSUInteger _displayDidRefreshCount;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBlock:(id)arg0 ;
// -(id)initWithBlock:(id)arg0 frameInterval:(unk)arg1  ;
-(void)displayDidRefresh:(id)arg0 ;


@end


#endif