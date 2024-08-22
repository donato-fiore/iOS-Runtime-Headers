// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELPLAYBACKINTENTTRACKLISTTOKEN_H
#define MPCMODELPLAYBACKINTENTTRACKLISTTOKEN_H

@class MPModelRequest, MPIdentifierSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding>



@property (copy, nonatomic) MPModelRequest *request; // ivar: _request
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers; // ivar: _startItemIdentifiers


+(BOOL)supportsSecureCoding;
+(id)requiredPropertiesForStaticMediaClips;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif