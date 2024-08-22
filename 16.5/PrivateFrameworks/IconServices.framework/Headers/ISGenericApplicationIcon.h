// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISGENERICAPPLICATIONICON_H
#define ISGENERICAPPLICATIONICON_H



#import "ISTypeIcon.h"
#import "ISResourceProvider.h"

@interface ISGenericApplicationIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider; // ivar: _resourceProvider


+(id)sharedInstance;
-(id)init;
-(id)makeResourceProvider;


@end


#endif