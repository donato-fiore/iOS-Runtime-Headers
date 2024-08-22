// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINDEXABLECONTENT_H
#define PKINDEXABLECONTENT_H

@class CHRecognitionSessionIndexableContent, NSString;

#import <Foundation/Foundation.h>


@interface PKIndexableContent : NSObject

@property (retain) CHRecognitionSessionIndexableContent *chIndexableContent; // ivar: _chIndexableContent
@property (readonly, nonatomic) NSString *indexableTextRepresentation;
@property (readonly, nonatomic) NSString *presentableTextRepresentation;


-(id)initWithIndexableContent:(id)arg0 ;


@end


#endif