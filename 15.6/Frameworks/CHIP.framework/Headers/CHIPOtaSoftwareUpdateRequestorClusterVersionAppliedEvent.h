// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOTASOFTWAREUPDATEREQUESTORCLUSTERVERSIONAPPLIEDEVENT_H
#define CHIPOTASOFTWAREUPDATEREQUESTORCLUSTERVERSIONAPPLIEDEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPOtaSoftwareUpdateRequestorClusterVersionAppliedEvent : NSObject

@property (retain, nonatomic) NSNumber *productID; // ivar: _productID
@property (retain, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion


-(id)init;


@end


#endif