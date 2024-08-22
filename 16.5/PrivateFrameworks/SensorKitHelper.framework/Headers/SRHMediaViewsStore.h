// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRHMEDIAVIEWSSTORE_H
#define SRHMEDIAVIEWSSTORE_H

@class UIScrollView, NSMapTable, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SRHMediaViewsStore : NSObject {
    UIScrollView *_scrollView;
    NSMapTable *_offScreenMediaViews;
    NSMapTable *_onScreenMediaViews;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property BOOL connectionDidInvalidate; // ivar: _connectionDidInvalidate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *q; // ivar: _q


+(void)initialize;
-(BOOL)isOnTopOfDetectedMedia:(struct CGRect )arg0 ;
-(id)initWithScrollView:(id)arg0 ;
-(struct CGRect )visibleArea;
-(void)_writeMediaEventsToBiome:(id)arg0 ;
-(void)addViewToStore:(id)arg0 ;
-(void)dealloc;
-(void)markViewsAsOffScreen;
-(void)markViewsAsOnScreen;
-(void)processScrollViewOffset;
-(void)removeAllViews;
-(void)removeViewFromStore:(id)arg0 ;
-(void)setupConnection;


@end


#endif