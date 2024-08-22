// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUENVIRONMENT_H
#define CUENVIRONMENT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CUEnvironment : NSObject {
    NSMutableDictionary *_objects;
}




-(id)description;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif