// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCO10PODCASTSUI6LEGACY14JSCLIENTOBJECT_H
#define _TTCO10PODCASTSUI6LEGACY14JSCLIENTOBJECT_H

@class NSString;
@protocol _TtP10PodcastsUI14JSClientExport_;

#import <Foundation/Foundation.h>


@interface _TtCO10PodcastsUI6Legacy14JSClientObject : NSObject <_TtP10PodcastsUI14JSClientExport_>

 {
    ? accountStore;
}


@property (nonatomic, readonly) NSString *buildType;
@property (nonatomic, readonly) NSString *deviceType;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *storefrontIdentifier;


-(id)analyticsIdentifiers;
-(id)getDefaultForKeyName:(id)arg0 ;
-(id)init;
-(void)setDefaultForKeyName:(id)arg0 ;


@end


#endif