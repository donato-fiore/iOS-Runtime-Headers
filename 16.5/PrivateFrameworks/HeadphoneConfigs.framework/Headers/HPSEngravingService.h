// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSENGRAVINGSERVICE_H
#define HPSENGRAVINGSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BTSDevice.h"

@interface HPSEngravingService : NSObject {
    BTSDevice *_device;
    NSString *_engravingData;
}




-(BOOL)isEngravingSupported;
-(id)getEngravedCaseView;
-(id)initWithDevice:(id)arg0 ;


@end


#endif