// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTPLUGIN_H
#define HDWORKOUTPLUGIN_H

@class NSString;
@protocol HDPlugin;

#import <Foundation/Foundation.h>


@interface HDWorkoutPlugin : NSObject <HDPlugin>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) Class superclass;


+(BOOL)shouldLoadPluginForDaemon:(id)arg0 ;
-(id)extensionForHealthDaemon:(id)arg0 ;
-(id)extensionForProfile:(id)arg0 ;


@end


#endif