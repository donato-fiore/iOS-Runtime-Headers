// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMICLOUDISOFFDATAVIEW_H
#define REMICLOUDISOFFDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMICloudIsOffDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)fetchICloudIsOffCloudConfigurationPropertiesWithError:(*id)arg0 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif