// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSBINDER_H
#define VSBINDER_H

@class NSCountedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VSBinder : NSObject

@property (readonly, weak, nonatomic) id *boundObject; // ivar: _boundObject
@property (retain, nonatomic) NSCountedSet *currentlyChangingBindings; // ivar: _currentlyChangingBindings
@property (retain, nonatomic) NSMutableDictionary *establishedBindings; // ivar: _establishedBindings
@property (nonatomic, getter=isEstablishmentProhibited) BOOL establishmentProhibited; // ivar: _establishmentProhibited


-(id)_infoForBinding:(id)arg0 ;
-(id)init;
-(id)initWithBoundObject:(id)arg0 ;
-(id)valueForBinding:(id)arg0 ;
-(void)dealloc;
-(void)establishBinding:(id)arg0 withInfo:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setValue:(id)arg0 forBinding:(id)arg1 ;
-(void)tearDownBinding:(id)arg0 ;


@end


#endif