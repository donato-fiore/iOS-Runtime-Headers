// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYERSESSIONRESPONSEITEM_H
#define MPCPLAYERSESSIONRESPONSEITEM_H

@class NSString, NSIndexPath, MPModelGenericObject;

#import <Foundation/Foundation.h>

#import "MPCPlayerSessionResponse.h"

@interface MPCPlayerSessionResponseItem : NSObject

@property (readonly, nonatomic) NSString *contentItemIdentifier; // ivar: _contentItemIdentifier
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) MPModelGenericObject *metadataObject; // ivar: _metadataObject
@property (readonly, weak, nonatomic) MPCPlayerSessionResponse *response; // ivar: _response


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithModelGenericObject:(id)arg0 indexPath:(id)arg1 response:(id)arg2 ;
-(id)play;
-(id)playOnPlayerPath:(id)arg0 ;
-(id)remove;


@end


#endif