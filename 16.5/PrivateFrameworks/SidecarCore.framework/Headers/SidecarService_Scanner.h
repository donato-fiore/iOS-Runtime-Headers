// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIDECARSERVICE_SCANNER_H
#define SIDECARSERVICE_SCANNER_H



#import "SidecarService.h"

@interface SidecarService_Scanner : SidecarService



+(NSInteger)minimumRapportVersion;
+(id)name;
+(id)returnTypes;
-(id)localizedDescription;
-(id)localizedItemName;
-(id)makeRequest;
-(id)serviceExtension;
-(id)serviceIdentifier;


@end


#endif