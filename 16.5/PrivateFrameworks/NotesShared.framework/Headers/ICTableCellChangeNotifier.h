// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLECELLCHANGENOTIFIER_H
#define ICTABLECELLCHANGENOTIFIER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface ICTableCellChangeNotifier : NSObject

@property (retain) NSHashTable *observers; // ivar: _observers


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)notifyOfChangeAtColumnID:(id)arg0 rowID:(id)arg1 delta:(NSInteger)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif