// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPASSSELECTIONFIELDDETECTORLISTENER_H
#define NPKPASSSELECTIONFIELDDETECTORLISTENER_H

@class NSHashTable, NSString;
@protocol NPKPassSelectionFieldDetectorListener;

#import <Foundation/Foundation.h>


@interface NPKPassSelectionFieldDetectorListener : NSObject <NPKPassSelectionFieldDetectorListener>

 {
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_notifyObserverDidEnterFieldForPassWithUniqueID:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;


@end


#endif