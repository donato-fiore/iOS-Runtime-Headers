// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFCOUNTABLEMATCHESCONTEXT_H
#define _MFCOUNTABLEMATCHESCONTEXT_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _MFCountableMatchesContext : NSObject {
    *__CFDictionary _peopleCount;
    NSMutableSet *_popularPeople;
}


@property (nonatomic) NSInteger maxCount; // ivar: _maxCount


-(id)highestMatches;
-(id)init;
-(void)countInstances:(id)arg0 usingPredicate:(id)arg1 ;
-(void)dealloc;


@end


#endif