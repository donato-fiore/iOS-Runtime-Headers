// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL22COMPOUNDSCROLLOBSERVER_H
#define _TTC19APPSTOREKITINTERNAL22COMPOUNDSCROLLOBSERVER_H

@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal22CompoundScrollObserver : NSObject <UIScrollViewDelegate>

 {
    ? children;
}




-(id)init;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif