// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TICONTACTMANAGERMOCK_H
#define TICONTACTMANAGERMOCK_H

@class TIContactCollection, NSUUID, NSString, NSArray;
@protocol TIContactManaging;

#import <Foundation/Foundation.h>


@interface TIContactManagerMock : NSObject <TIContactManaging>

 {
    TIContactCollection *_contactCollection;
}


@property (readonly, copy, nonatomic) NSUUID *contactCollectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)addContactObserver:(SEL)arg0 ;
-(id)initWithContactCollection:(id)arg0 ;
-(void)getOnce:(id)arg0 ;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)removeContactObserver:(id)arg0 ;
-(void)unload;


@end


#endif