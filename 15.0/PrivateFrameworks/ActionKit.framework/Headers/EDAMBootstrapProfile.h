// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMBOOTSTRAPPROFILE_H
#define EDAMBOOTSTRAPPROFILE_H

@class NSString;


#import "FATObject.h"
#import "EDAMBootstrapSettings.h"

@interface EDAMBootstrapProfile : FATObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) EDAMBootstrapSettings *settings; // ivar: _settings


+(id)structFields;
+(id)structName;


@end


#endif