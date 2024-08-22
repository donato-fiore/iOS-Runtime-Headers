// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKLOCALSEARCHRESPONSE_H
#define MKLOCALSEARCHRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MKLocalSearchResponse : NSObject

@property (readonly, nonatomic) ? boundingRegion; // ivar: _boundingRegion
@property (readonly, nonatomic) NSArray *mapItems; // ivar: _mapItems


-(id)_dictionaryRepresentation;
-(id)_initWithMapItems:(id)arg0 boundingRegion:(id)arg1 ;
-(id)description;


@end


#endif