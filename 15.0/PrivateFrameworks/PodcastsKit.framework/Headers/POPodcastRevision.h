// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPODCASTREVISION_H
#define POPODCASTREVISION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface POPodcastRevision : NSObject

@property BOOL isPodcastCollection; // ivar: _isPodcastCollection
@property (retain, nonatomic) NSString *objectID; // ivar: _objectID
@property (nonatomic) NSUInteger revisionID; // ivar: _revisionID
@property (nonatomic) NSInteger revisionType; // ivar: _revisionType


-(id)deletedModelObject;
-(id)description;


@end


#endif