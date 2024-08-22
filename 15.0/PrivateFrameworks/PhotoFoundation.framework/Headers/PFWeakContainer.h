// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFWEAKCONTAINER_H
#define PFWEAKCONTAINER_H


#import <Foundation/Foundation.h>

#import "_PFWeakContainerSentenal.h"

@interface PFWeakContainer : NSObject {
    _PFWeakContainerSentenal *_sentenal;
    id *_nilNotificationDelegate;
}




-(BOOL)isTrackingWeakObjectDealloc:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setNilNotificationDelegate:(id)arg0 ;
-(void)stopTrackingWeakObjectDealloc:(id)arg0 ;
-(void)trackWeakObjectDealloc:(id)arg0 ;
-(void)weakReferenceBecameNil;


@end


#endif