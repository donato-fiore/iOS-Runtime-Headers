// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELRADIOGETTRACKSRESPONSE_H
#define MPCMODELRADIOGETTRACKSRESPONSE_H

@class MPSectionedCollection;

#import <Foundation/Foundation.h>


@interface MPCModelRadioGetTracksResponse : NSObject

@property (readonly, nonatomic) NSInteger tracklistAction; // ivar: _tracklistAction
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks; // ivar: _tracks


-(id)initWithTracks:(id)arg0 tracklistAction:(NSInteger)arg1 ;


@end


#endif