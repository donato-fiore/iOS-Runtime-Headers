// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSHSLEEPHEALTHDAEMONPLUGIN_H
#define HDSHSLEEPHEALTHDAEMONPLUGIN_H

@class NSString;
@protocol HDPlugin, HDTaskServerClassProvider;

#import <Foundation/Foundation.h>


@interface HDSHSleepHealthDaemonPlugin : NSObject <HDPlugin, HDTaskServerClassProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) Class superclass;


-(id)extensionForHealthDaemon:(id)arg0 ;
-(id)extensionForProfile:(id)arg0 ;
-(id)taskServerClasses;


@end


#endif