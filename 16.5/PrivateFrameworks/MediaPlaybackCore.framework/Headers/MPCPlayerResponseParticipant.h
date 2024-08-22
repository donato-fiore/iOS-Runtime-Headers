// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERRESPONSEPARTICIPANT_H
#define MPCPLAYERRESPONSEPARTICIPANT_H

@class NSString, MPModelSharedListeningParticipant;
@protocol NSObject;

#import <Foundation/Foundation.h>

#import "MPCPlayerResponse.h"

@interface MPCPlayerResponseParticipant : NSObject <NSObject>



@property (readonly, nonatomic) NSString *contentItemIdentifier; // ivar: _contentItemIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPModelSharedListeningParticipant *modelObject; // ivar: _modelObject
@property (readonly, weak, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (readonly) Class superclass;


-(id)_stateDumpObject;
-(id)initWithModelObject:(id)arg0 response:(id)arg1 ;


@end


#endif