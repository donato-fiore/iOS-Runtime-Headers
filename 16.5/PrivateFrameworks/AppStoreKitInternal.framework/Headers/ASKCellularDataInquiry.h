// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASKCELLULARDATAINQUIRY_H
#define ASKCELLULARDATAINQUIRY_H

@class NSBundle;

#import <Foundation/Foundation.h>


@interface ASKCellularDataInquiry : NSObject

@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) BOOL isEnabledForBundle;
@property (readonly, nonatomic) BOOL isEnabledForDevice;
@property (readonly, nonatomic) BOOL isSupported;


+(id)settingsURL;
-(id)init;
-(id)initWithBundle:(id)arg0 ;


@end


#endif