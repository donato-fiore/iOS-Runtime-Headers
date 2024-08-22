// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNTESTCONTEXT_H
#define SNTESTCONTEXT_H

@class UIApplication, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SNTestContext : NSObject

@property (readonly, nonatomic) UIApplication *application; // ivar: _application
@property (readonly, nonatomic) NSMutableDictionary *objects; // ivar: _objects
@property (readonly, nonatomic) NSString *testName; // ivar: _testName


-(id)initWithApplication:(id)arg0 testName:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif