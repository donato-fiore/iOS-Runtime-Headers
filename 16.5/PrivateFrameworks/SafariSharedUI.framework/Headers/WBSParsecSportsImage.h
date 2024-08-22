// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPARSECSPORTSIMAGE_H
#define WBSPARSECSPORTSIMAGE_H

@class WBSParsecModel, NSString;


#import "WBSParsecImageRepresentation.h"

@interface WBSParsecSportsImage : WBSParsecModel

@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // ivar: _imageRepresentation
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)schema;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif