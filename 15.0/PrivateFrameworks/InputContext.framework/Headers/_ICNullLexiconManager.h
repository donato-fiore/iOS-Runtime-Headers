// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICNULLLEXICONMANAGER_H
#define _ICNULLLEXICONMANAGER_H

@class NSMutableArray;
@protocol _ICLexiconManaging;

#import <Foundation/Foundation.h>


@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging>

 {
    NSMutableArray *_contactObservers;
}




-(id)addContactObserver:(SEL)arg0 ;
-(id)init;
-(id)loadLexicons;
-(id)loadLexicons:(id)arg0 ;
-(id)loadLexiconsUsingFilter:(id)arg0 ;
-(id)test_loadLexicons;
-(void)hibernate;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)removeContactObserver:(id)arg0 ;
-(void)unloadLexicons;
-(void)warmUp;


@end


#endif