// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIALERTVISUALSTYLEUPDATABLECONSTRAINTS_H
#define UIALERTVISUALSTYLEUPDATABLECONSTRAINTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface UIAlertVisualStyleUpdatableConstraints : NSObject {
    NSMutableDictionary *_constraintsByKey;
}




-(BOOL)hasUpdatableConstraints;
-(id)constraintForKey:(id)arg0 ;
-(id)init;
-(void)addConstraint:(id)arg0 forKey:(id)arg1 ;


@end


#endif