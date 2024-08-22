// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POPODCASTMODELOBJECT_H
#define POPODCASTMODELOBJECT_H

@class SAMPCollection, NSString, NSIndexPath;

#import <Foundation/Foundation.h>


@interface POPodcastModelObject : NSObject

@property (readonly) SAMPCollection *SAMPCollection;
@property (retain) NSString *feedUrl; // ivar: _feedUrl
@property (retain) NSIndexPath *indexPath; // ivar: _indexPath
@property (retain) NSString *title; // ivar: _title
@property (retain) NSString *uuid; // ivar: _uuid


+(Class)SAMPClass;
+(id)uriScheme;
-(id)description;


@end


#endif