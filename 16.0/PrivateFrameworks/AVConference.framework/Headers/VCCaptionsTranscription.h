// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCAPTIONSTRANSCRIPTION_H
#define VCCAPTIONSTRANSCRIPTION_H

@class NSMutableString, NSString, NSArray;
@protocol NSCopying, NSCoding, NSSecureCoding, VCCaptionsTranscription;

#import <Foundation/Foundation.h>


@interface VCCaptionsTranscription : NSObject <NSCopying, NSCoding, NSSecureCoding, VCCaptionsTranscription>

 {
    NSMutableString *_formattedText;
}


@property (readonly, nonatomic) NSString *formattedText;
@property (nonatomic) BOOL isFinal; // ivar: _isFinal
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property (readonly, nonatomic) NSArray *segments; // ivar: _segments
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (nonatomic) unsigned int updateNumber; // ivar: _updateNumber
@property (nonatomic) unsigned int utteranceNumber; // ivar: _utteranceNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSFTranscription:(id)arg0 utteranceNumber:(unsigned int)arg1 updateNumber:(unsigned int)arg2 isLocal:(BOOL)arg3 isFinal:(BOOL)arg4 streamToken:(NSInteger)arg5 ;
-(id)initWithUtteranceNumber:(unsigned int)arg0 updateNumber:(unsigned int)arg1 isLocal:(BOOL)arg2 isFinal:(BOOL)arg3 streamToken:(NSInteger)arg4 ;
-(void)addSegment:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif