// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TICONTACTMANAGER_H
#define TICONTACTMANAGER_H

@class NSUUID, NSString;
@protocol TIContactManaging;

#import <Foundation/Foundation.h>


@interface TIContactManager : NSObject <TIContactManaging>



@property (readonly, copy, nonatomic) NSUUID *contactCollectionUUID; // ivar: contactCollectionUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedTIContactManager;
+(id)singletonInstance;
+(void)setSharedTIContactManager:(id)arg0 ;
-(id)addContactObserver:(SEL)arg0 ;
-(void)getOnce:(id)arg0 ;
-(void)handleMemoryPressureLevel:(NSUInteger)arg0 excessMemoryInBytes:(NSUInteger)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)removeContactObserver:(id)arg0 ;
-(void)unload;


@end


#endif