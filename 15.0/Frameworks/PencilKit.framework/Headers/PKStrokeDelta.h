// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTROKEDELTA_H
#define PKSTROKEDELTA_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "_PKStrokeConcrete.h"
#import "PKStrokePath.h"

@interface PKStrokeDelta : NSObject

@property (retain, nonatomic) NSUUID *_strokeUUID; // ivar: _strokeUUID
@property (retain, nonatomic) _PKStrokeConcrete *deltaStroke; // ivar: _deltaStroke
@property (retain, nonatomic) PKStrokePath *deltaStrokeData; // ivar: _deltaStrokeData


-(id)dataRepresentation;
-(id)description;
-(id)initWithArchive:(*void)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif