// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCOPENLOCATIONINTENT_H
#define DOCOPENLOCATIONINTENT_H

@class INIntent, INFile;


#import "DOCIntentLocation.h"

@interface DOCOpenLocationIntent : INIntent

@property (copy, nonatomic) INFile *folder;
@property (copy, nonatomic) DOCIntentLocation *location;


+(id)intentFromActivity:(id)arg0 ;
+(id)intentFromGenericIntent:(id)arg0 ;


@end


#endif