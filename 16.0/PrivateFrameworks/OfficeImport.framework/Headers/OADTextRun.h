// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTEXTRUN_H
#define OADTEXTRUN_H


#import <Foundation/Foundation.h>

#import "OADCharacterProperties.h"

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}




-(BOOL)isEmpty;
-(BOOL)isSimilarToTextRun:(id)arg0 ;
-(NSUInteger)characterCount;
-(id)description;
-(id)init;
-(id)properties;
-(void)removeUnnecessaryOverrides;
-(void)setProperties:(id)arg0 ;


@end


#endif