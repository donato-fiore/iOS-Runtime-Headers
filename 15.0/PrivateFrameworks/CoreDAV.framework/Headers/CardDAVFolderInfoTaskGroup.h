// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDDAVFOLDERINFOTASKGROUP_H
#define CARDDAVFOLDERINFOTASKGROUP_H

@class NSSet;


#import "CoreDAVContainerInfoTaskGroup.h"

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
    NSSet *_directoryGatewayURLs;
}




-(id)_copyContainerParserMappings;
-(id)_copyContainerWithURL:(id)arg0 andProperties:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg0 containerURLs:(id)arg1 directoryGatewayURLs:(id)arg2 taskManager:(id)arg3 ;
-(int)containerInfoDepthForURL:(id)arg0 ;


@end


#endif