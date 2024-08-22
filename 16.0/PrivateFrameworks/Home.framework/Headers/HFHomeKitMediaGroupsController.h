// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFHOMEKITMEDIAGROUPSCONTROLLER_H
#define HFHOMEKITMEDIAGROUPSCONTROLLER_H

@class NSString, NSHashTable;
@protocol HMMediaGroupsControllerDelegate;

#import <Foundation/Foundation.h>


@interface HFHomeKitMediaGroupsController : NSObject <HMMediaGroupsControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)initWithHomeManager:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)mediaGroupsController:(id)arg0 didReceiveGroup:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif