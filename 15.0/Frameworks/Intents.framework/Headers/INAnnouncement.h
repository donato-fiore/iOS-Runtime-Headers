// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INANNOUNCEMENT_H
#define INANNOUNCEMENT_H

@class NSString, NSNumber, NSURL;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INAnnouncement : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *endTime;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *speechDataTranscription; // ivar: _speechDataTranscription
@property (readonly, copy, nonatomic) NSURL *speechDataURL; // ivar: _speechDataURL
@property (readonly, copy, nonatomic) NSNumber *startTime;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpeechDataURL:(id)arg0 identifier:(id)arg1 ;
-(id)initWithSpeechDataURL:(id)arg0 identifier:(id)arg1 speechDataTranscription:(id)arg2 ;
-(id)initWithSpeechDataURL:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 identifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif