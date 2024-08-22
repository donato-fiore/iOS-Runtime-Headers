// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAFUNCTIONBROWSERSTATE_H
#define TSAFUNCTIONBROWSERSTATE_H

@class TSPObject, NSMutableArray;



@interface TSAFunctionBrowserState : TSPObject {
    NSMutableArray *mRecentFunctions;
    NSMutableArray *mBackFunctions;
    NSMutableArray *mForwardFunctions;
    unsigned short mCurrentFunction;
}




-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(id)allBackFunctions;
-(id)allForwardFunctions;
-(id)initWithContext:(id)arg0 ;
-(id)recentFunctions;
-(unsigned short)back;
-(unsigned short)backByAmount:(NSUInteger)arg0 ;
-(unsigned short)currentFunction;
-(unsigned short)forward;
-(unsigned short)forwardByAmount:(NSUInteger)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_filterOutUnknownFunctions:(id)arg0 ;
-(void)recordNavigationTo:(unsigned short)arg0 ;
-(void)recordRecentFunction:(unsigned short)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif