// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUISAFARIOBSERVER_H
#define SEARCHUISAFARIOBSERVER_H


#import <Foundation/Foundation.h>


@interface SearchUISafariObserver : NSObject



-(id)init;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadSearchEngines;


@end


#endif