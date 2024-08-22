// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INCOPTIONALLOCALEXTENSION_H
#define _INCOPTIONALLOCALEXTENSION_H

@class NSString;
@protocol INCLocalExtending;

#import <Foundation/Foundation.h>


@interface _INCOptionalLocalExtension : NSObject <INCLocalExtending>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localExtensionIdentifier;
@property (readonly) Class superclass;


-(id)handlerForIntent:(id)arg0 ;


@end


#endif