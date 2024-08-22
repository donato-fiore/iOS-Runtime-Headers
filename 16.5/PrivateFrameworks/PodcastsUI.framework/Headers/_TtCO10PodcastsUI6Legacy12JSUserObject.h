// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCO10PODCASTSUI6LEGACY12JSUSEROBJECT_H
#define _TTCO10PODCASTSUI6LEGACY12JSUSEROBJECT_H

@class NSString;
@protocol _TtP10PodcastsUI12JSUserExport_;

#import <Foundation/Foundation.h>


@interface _TtCO10PodcastsUI6Legacy12JSUserObject : NSObject <_TtP10PodcastsUI12JSUserExport_>

 {
    ? accountStore;
}


@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;


-(id)init;


@end


#endif