// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMLCAROEMCONFIGMANAGER_H
#define KMLCAROEMCONFIGMANAGER_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface KmlCarOemConfigManager : NSObject

@property (retain, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (retain, nonatomic) NSArray *nfcDenyList; // ivar: _nfcDenyList
@property (retain, nonatomic) NSArray *uwbDenyList; // ivar: _uwbDenyList


-(id)init;
-(void)parseConfig;


@end


#endif