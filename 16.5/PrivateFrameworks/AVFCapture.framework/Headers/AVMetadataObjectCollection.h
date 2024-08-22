// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMETADATAOBJECTCOLLECTION_H
#define AVMETADATAOBJECTCOLLECTION_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface AVMetadataObjectCollection : NSObject

@property (readonly) NSSet *handledMetadataObjectTypes; // ivar: _handledMetadataObjectTypes
@property (readonly) NSSet *metadataObjectTypes; // ivar: _metadataObjectTypes
@property (readonly) NSArray *metadataObjects; // ivar: _metadataObjects
@property (readonly) ? time; // ivar: _time


+(id)collectionWithTime:(struct ? )arg0 metadataObjectTypes:(id)arg1 handledMetadataObjectTypes:(id)arg2 metadataObjects:(id)arg3 ;
-(id)initWithTime:(struct ? )arg0 metadataObjectTypes:(id)arg1 handledMetadataObjectTypes:(id)arg2 metadataObjects:(id)arg3 ;
-(void)dealloc;


@end


#endif