// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHRESOLVEDPLACE_H
#define PGGRAPHRESOLVEDPLACE_H

@class NSString;
@protocol PGGraphIngestPlace;

#import <Foundation/Foundation.h>


@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *placeInterestType; // ivar: _placeInterestType
@property (readonly) Class superclass;


-(id)initWithPlaceOfInterestType:(id)arg0 confidence:(CGFloat)arg1 ;


@end


#endif