// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHDEFAULTSOBSERVER_H
#define BLSHDEFAULTSOBSERVER_H

@class NSUserDefaults, NSMapTable, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BLSHDefaultsObserver : NSObject <BSInvalidatable>

 {
    NSUserDefaults *_observedDefaults;
    NSMapTable *_handlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL invalidated; // ivar: _invalidated
@property (readonly) Class superclass;


-(id)init;
-(void)addHandlerForKey:(id)arg0 attribute:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif