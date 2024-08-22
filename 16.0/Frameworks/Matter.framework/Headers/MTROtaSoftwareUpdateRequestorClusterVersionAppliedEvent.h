// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEREQUESTORCLUSTERVERSIONAPPLIEDEVENT_H
#define MTROTASOFTWAREUPDATEREQUESTORCLUSTERVERSIONAPPLIEDEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateRequestorClusterVersionAppliedEvent : NSObject

@property (retain, nonatomic) NSNumber *productID; // ivar: _productID
@property (retain, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion


-(id)description;
-(id)init;


@end


#endif