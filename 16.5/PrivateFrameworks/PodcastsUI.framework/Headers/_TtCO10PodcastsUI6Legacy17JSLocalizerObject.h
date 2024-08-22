// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCO10PODCASTSUI6LEGACY17JSLOCALIZEROBJECT_H
#define _TTCO10PODCASTSUI6LEGACY17JSLOCALIZEROBJECT_H

@class NSString;
@protocol _TtP10PodcastsUI17JSLocalizerExport_;

#import <Foundation/Foundation.h>


@interface _TtCO10PodcastsUI6Legacy17JSLocalizerObject : NSObject <_TtP10PodcastsUI17JSLocalizerExport_>

 {
    ? bundle;
    ? locale;
    ? preferredLocalization;
    ? dateFormatters;
    ? dateIntervalFormatters;
}


@property (nonatomic, readonly) NSString *identifier;


-(id)decimal:(id)arg0 ;
-(id)duration:(CGFloat)arg0 ;
-(id)duration:(CGFloat)arg0 abbreviated:(BOOL)arg1 ;
-(id)formatDate:(id)arg0 ;
-(id)formattedCount:(id)arg0 ;
-(id)friendlyDate:(id)arg0 ;
-(id)init;
-(id)string:(id)arg0 ;
-(id)stringWithCount:(id)arg0 ;
-(id)timeAgo:(id)arg0 ;
-(id)timeRange:(id)arg0 ;
-(id)timeRangeWithFormat:(id)arg0 ;


@end


#endif