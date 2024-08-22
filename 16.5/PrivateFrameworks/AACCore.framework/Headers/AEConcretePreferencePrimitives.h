// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AECONCRETEPREFERENCEPRIMITIVES_H
#define AECONCRETEPREFERENCEPRIMITIVES_H

@class NSString;
@protocol AEPreferencePrimitives;

#import <Foundation/Foundation.h>


@interface AEConcretePreferencePrimitives : NSObject <AEPreferencePrimitives>

 {
    NSString *_domain;
}




-(id)boolForKey:(id)arg0 ;
-(void)setBool:(id)arg0 forKey:(id)arg1 ;


@end


#endif