// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGKVCINSPECTABLE_H
#define FIGKVCINSPECTABLE_H


#import <Foundation/Foundation.h>


@interface FigKVCInspectable : NSObject



-(BOOL)validateValue:(*id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateValue:(*id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif