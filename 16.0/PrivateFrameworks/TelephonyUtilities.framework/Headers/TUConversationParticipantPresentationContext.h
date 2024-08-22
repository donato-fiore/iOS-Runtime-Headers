// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONVERSATIONPARTICIPANTPRESENTATIONCONTEXT_H
#define TUCONVERSATIONPARTICIPANTPRESENTATIONCONTEXT_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isInCanvas; // ivar: _isInCanvas
@property (readonly, nonatomic) NSUInteger participantIdentifier; // ivar: _participantIdentifier
@property (readonly, nonatomic) NSNumber *prominence; // ivar: _prominence
@property (readonly, nonatomic) CGRect spatialPosition; // ivar: _spatialPosition
@property (readonly, nonatomic) NSUInteger videoQuality; // ivar: _videoQuality
@property (readonly, nonatomic) NSNumber *visibility; // ivar: _visibility


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParticipantIdentifier:(NSUInteger)arg0 videoQuality:(NSUInteger)arg1 visibility:(id)arg2 prominence:(id)arg3 spatialPosition:(struct CGRect )arg4 isInCanvas:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif