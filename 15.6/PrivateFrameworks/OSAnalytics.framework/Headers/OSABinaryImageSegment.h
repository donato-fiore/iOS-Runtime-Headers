// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSABINARYIMAGESEGMENT_H
#define OSABINARYIMAGESEGMENT_H


#import <Foundation/Foundation.h>

#import "OSASymbolInfo.h"

@interface OSABinaryImageSegment : NSObject

@property int source; // ivar: _source
@property (readonly, nonatomic) OSASymbolInfo *symbolInfo; // ivar: _symbolInfo
@property NSUInteger used_index; // ivar: _used_index


-(id)details;
-(id)full_details;
-(id)initWithAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 for:(unsigned char)arg2 ;
-(id)initWithSymbol:(id)arg0 ;


@end


#endif