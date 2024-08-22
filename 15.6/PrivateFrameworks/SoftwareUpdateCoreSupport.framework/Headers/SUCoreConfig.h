// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORECONFIG_H
#define SUCORECONFIG_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreConfig : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, retain, nonatomic) NSString *defaultsPath; // ivar: _defaultsPath
@property (readonly, retain, nonatomic) NSString *projectName; // ivar: _projectName


-(BOOL)getBoolConfigForKey:(id)arg0 ;
-(BOOL)getBoolConfigForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(id)description;
-(id)getConfig;
-(id)getNumberConfigForKey:(id)arg0 ;
-(id)getStringConfigForKey:(id)arg0 ;
-(id)initWithProjectName:(id)arg0 ;
-(id)initWithProjectName:(id)arg0 defaultsPath:(id)arg1 ;
-(id)stateSafeGetConfig;
-(void)clearConfig;
-(void)setConfig:(id)arg0 forKey:(id)arg1 ;
-(void)stateSafeSetConfig:(id)arg0 forKey:(id)arg1 ;


@end


#endif