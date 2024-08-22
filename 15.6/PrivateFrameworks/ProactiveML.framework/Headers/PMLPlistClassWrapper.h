// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLPLISTCLASSWRAPPER_H
#define PMLPLISTCLASSWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PMLPlistClassWrapper : NSObject {
    NSString *_classNameKey;
}




-(id)initWithClassNameKey:(id)arg0 ;
-(id)readObjectWithData:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)readObjectWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)writeToDataWithObject:(id)arg0 andChunks:(id)arg1 ;
-(id)writeToPlistWithObject:(id)arg0 andChunks:(id)arg1 ;


@end


#endif