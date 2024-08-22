// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHRECOGNITIONSESSIONINDEXABLECONTENT_H
#define CHRECOGNITIONSESSIONINDEXABLECONTENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CHRecognitionSessionIndexableContent : NSObject

@property (readonly, copy, nonatomic) NSString *indexableTextRepresentation; // ivar: _indexableTextRepresentation
@property (readonly, copy, nonatomic) NSString *presentableTextRepresentation; // ivar: _presentableTextRepresentation


-(id)initWithIndexableTextRepresentation:(id)arg0 presentableTextRepresentation:(id)arg1 ;


@end


#endif