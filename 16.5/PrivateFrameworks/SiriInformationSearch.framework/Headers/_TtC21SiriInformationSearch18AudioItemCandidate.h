// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21SIRIINFORMATIONSEARCH18AUDIOITEMCANDIDATE_H
#define _TTC21SIRIINFORMATIONSEARCH18AUDIOITEMCANDIDATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC21SiriInformationSearch18AudioItemCandidate : NSObject {
    ? identifier;
    ? title;
    ? artist;
    ? itemType;
    ? source;
    ? requiresSubscription;
    ? isDownloaded;
    ? score;
    ? features;
    ? backingItem;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;


@end


#endif