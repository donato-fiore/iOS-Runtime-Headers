// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MSCOUNTABLEMATCHESCONTEXT_H
#define _MSCOUNTABLEMATCHESCONTEXT_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _MSCountableMatchesContext : NSObject {
    NSMutableDictionary *_contactsCount;
}


@property (readonly, nonatomic) NSMutableSet *highestMatches; // ivar: _highestMatches
@property (nonatomic) NSInteger maxCount; // ivar: _maxCount


-(id)init;
-(void)countInstances:(id)arg0 usingPredicate:(id)arg1 ;


@end


#endif