// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPRESENTATIONATTRIBUTESMANAGER_H
#define SXPRESENTATIONATTRIBUTESMANAGER_H

@class NSString, NSHashTable;
@protocol SXPresentationAttributesManager;

#import <Foundation/Foundation.h>

#import "SXPresentationAttributes.h"

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // ivar: _presentationAttributes
@property (readonly) Class superclass;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)attributesChangedFrom:(id)arg0 to:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateAttributes:(id)arg0 ;


@end


#endif