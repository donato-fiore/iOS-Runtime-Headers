// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMODELMETADATA_H
#define MLMODELMETADATA_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MLModelMetadata : NSObject

@property (readonly) NSString *author; // ivar: _author
@property (readonly) NSDictionary *creatorDefined; // ivar: _creatorDefined
@property (readonly) NSString *license; // ivar: _license
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *shortDescription; // ivar: _shortDescription
@property (readonly) NSString *versionString; // ivar: _versionString


-(id)debugDescription;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 shortDescription:(id)arg1 versionString:(id)arg2 author:(id)arg3 license:(id)arg4 creatorDefined:(id)arg5 ;


@end


#endif