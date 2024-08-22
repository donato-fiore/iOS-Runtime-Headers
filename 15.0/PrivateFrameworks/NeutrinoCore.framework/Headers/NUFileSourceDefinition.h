// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUFILESOURCEDEFINITION_H
#define NUFILESOURCEDEFINITION_H

@class NSURL, NSString;


#import "NUSingleSourceDefinition.h"

@interface NUFileSourceDefinition : NUSingleSourceDefinition

@property (readonly) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useEmbeddedPreview; // ivar: _useEmbeddedPreview
@property (readonly) NSString *uti; // ivar: _uti


-(NSInteger)mediaType;
-(id)description;
-(id)generateSourceNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 UTI:(id)arg1 ;


@end


#endif