// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWEBAPPLICATION_H
#define SBWEBAPPLICATION_H



#import "SBApplication.h"

@interface SBWebApplication : SBApplication



+(id)_webAppIdentifierFromWebClipIdentifier:(id)arg0 ;
+(id)_webClipIdentifierFromWebAppIdentifier:(id)arg0 ;
-(BOOL)isWebApplication;
-(BOOL)supportsMultitaskingShelf;
-(id)iconIdentifier;


@end


#endif