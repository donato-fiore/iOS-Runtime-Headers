// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LADECRIPTIONBUILDER_H
#define LADECRIPTIONBUILDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LADecriptionBuilder : NSObject {
    NSObject *_object;
    NSMutableDictionary *_components;
}




-(id)build;
-(id)initWithObject:(id)arg0 ;
-(void)appendBool:(BOOL)arg0 withName:(id)arg1 ;
-(void)appendInteger:(NSInteger)arg0 withName:(id)arg1 ;
-(void)appendObject:(id)arg0 withName:(id)arg1 ;
-(void)appendString:(id)arg0 withName:(id)arg1 ;


@end


#endif