// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISOFTWARELIBRARYINTERFACE_H
#define SKUISOFTWARELIBRARYINTERFACE_H

@class NSString;
@protocol SKUILibraryInterface;

#import <Foundation/Foundation.h>


@interface SKUISoftwareLibraryInterface : NSObject <SKUILibraryInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)performActionForLibraryItem:(id)arg0 ;
-(id)exposedPlatformItemKinds;
-(id)stateForLibraryItem:(id)arg0 ;
-(void)enumerateStatesForLibraryItems:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif