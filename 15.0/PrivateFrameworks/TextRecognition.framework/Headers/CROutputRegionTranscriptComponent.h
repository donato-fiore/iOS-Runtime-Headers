// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CROUTPUTREGIONTRANSCRIPTCOMPONENT_H
#define CROUTPUTREGIONTRANSCRIPTCOMPONENT_H

@class NSString;
@protocol CRCodable, NSCopying;

#import <Foundation/Foundation.h>

#import "CROutputRegion.h"

@interface CROutputRegionTranscriptComponent : NSObject <CRCodable, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CROutputRegion *outputRegion; // ivar: _outputRegion
@property _NSRange representedRange; // ivar: _representedRange
@property (readonly) Class superclass;


+(id)componentWithOutputRegion:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)crCodableDataRepresentation;
-(id)initWithCRCodableDataRepresentation:(id)arg0 ;
-(id)initWithOutputRegion:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif