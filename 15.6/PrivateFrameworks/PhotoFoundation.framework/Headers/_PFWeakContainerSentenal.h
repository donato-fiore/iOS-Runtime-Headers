// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFWEAKCONTAINERSENTENAL_H
#define _PFWEAKCONTAINERSENTENAL_H


#import <Foundation/Foundation.h>

#import "PFWeakContainer.h"

@interface _PFWeakContainerSentenal : NSObject {
    PFWeakContainer *_container;
}




+(void)initialize;
-(BOOL)isAssociatedWithObject:(id)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(void)associateWithObject:(id)arg0 ;
-(void)clearContainer;
-(void)dealloc;
-(void)release;
-(void)removeAssociationWithObject:(id)arg0 ;


@end


#endif