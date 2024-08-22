// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLMODELCOLLECTIONENTRY_H
#define MLMODELCOLLECTIONENTRY_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface MLModelCollectionEntry : NSObject

@property (readonly, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL


+(id)entryWithModelIdentifier:(id)arg0 modelURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModelCollectionEntry:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithModelIdentifier:(id)arg0 modelUrl:(id)arg1 ;
-(id)description;


@end


#endif