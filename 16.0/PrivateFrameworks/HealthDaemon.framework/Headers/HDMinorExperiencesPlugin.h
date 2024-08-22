// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMINOREXPERIENCESPLUGIN_H
#define HDMINOREXPERIENCESPLUGIN_H

@class NSString;
@protocol HDPlugin;

#import <Foundation/Foundation.h>


@interface HDMinorExperiencesPlugin : NSObject <HDPlugin>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) Class superclass;


-(id)extensionForHealthDaemon:(id)arg0 ;
-(id)extensionForProfile:(id)arg0 ;


@end


#endif