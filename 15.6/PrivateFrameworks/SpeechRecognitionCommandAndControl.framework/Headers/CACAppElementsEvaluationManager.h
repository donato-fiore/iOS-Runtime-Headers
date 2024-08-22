// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACAPPELEMENTSEVALUATIONMANAGER_H
#define CACAPPELEMENTSEVALUATIONMANAGER_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface CACAppElementsEvaluationManager : NSObject {
    NSSet *_appIdentifersForStandardFilter;
    NSString *_evaluatorOverrideClassName;
}




+(id)sharedManager;
-(BOOL)isRecognitionString:(id)arg0 supportedForElement:(id)arg1 ;
-(Class)evaluatorClassForAppIdentifier:(id)arg0 ;
-(id)_trimmedArrayOfActionableAXElements:(id)arg0 ;
-(id)actionableAXElementsFromAXElements:(id)arg0 forAppIdentifier:(id)arg1 ;
-(id)init;


@end


#endif