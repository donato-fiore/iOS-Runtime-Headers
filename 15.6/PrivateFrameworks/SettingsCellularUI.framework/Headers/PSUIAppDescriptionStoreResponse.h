// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIAPPDESCRIPTIONSTORERESPONSE_H
#define PSUIAPPDESCRIPTIONSTORERESPONSE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "PSUIAppDescription.h"

@interface PSUIAppDescriptionStoreResponse : NSObject

@property (retain, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (retain, nonatomic) NSURL *installURL; // ivar: _installURL
@property (retain, nonatomic) PSUIAppDescription *partialAppDescription; // ivar: _partialAppDescription




@end


#endif