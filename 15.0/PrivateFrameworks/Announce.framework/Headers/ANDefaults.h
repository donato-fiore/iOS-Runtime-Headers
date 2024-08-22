// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANDEFAULTS_H
#define ANDEFAULTS_H

@class NSUserDefaults, NSDictionary;
@protocol ANDefaultsProtocol;

#import <Foundation/Foundation.h>


@interface ANDefaults : NSObject <ANDefaultsProtocol>



@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, nonatomic) NSDictionary *defaultsItems; // ivar: _defaultsItems


+(id)sharedInstance;
-(BOOL)boolForDefault:(id)arg0 ;
-(id)init;
-(id)numberForDefault:(id)arg0 ;
-(id)objectForDefault:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forDefault:(id)arg1 ;
-(void)setNumber:(id)arg0 forDefault:(id)arg1 ;
-(void)setObject:(id)arg0 forDefault:(id)arg1 ;


@end


#endif