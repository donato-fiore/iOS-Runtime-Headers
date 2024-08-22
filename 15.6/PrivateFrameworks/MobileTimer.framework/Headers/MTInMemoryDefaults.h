// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTINMEMORYDEFAULTS_H
#define MTINMEMORYDEFAULTS_H

@class NSString, NSMutableDictionary;
@protocol MTPersistence;

#import <Foundation/Foundation.h>


@interface MTInMemoryDefaults : NSObject <MTPersistence>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *storage; // ivar: _storage
@property (readonly) Class superclass;


-(float)floatForKey:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 defaultValue:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif