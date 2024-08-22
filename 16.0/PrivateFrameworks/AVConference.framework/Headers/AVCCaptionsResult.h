// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCCAPTIONSRESULT_H
#define AVCCAPTIONSRESULT_H

@class NSArray, NSString;
@protocol VCCaptionsTranscription;

#import <Foundation/Foundation.h>


@interface AVCCaptionsResult : NSObject <VCCaptionsTranscription>



@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens
@property (readonly, nonatomic) unsigned int updateNumber; // ivar: _updateNumber
@property (readonly, nonatomic) BOOL utteranceComplete; // ivar: _utteranceComplete
@property (readonly, nonatomic) unsigned int utteranceNumber; // ivar: _utteranceNumber


-(BOOL)addTokenWithString:(id)arg0 confidence:(CGFloat)arg1 range:(struct _NSRange )arg2 ;
-(id)description;
-(id)initWithCapacity:(NSInteger)arg0 utteranceComplete:(BOOL)arg1 utteranceNumber:(unsigned int)arg2 updateNumber:(unsigned int)arg3 ;
-(void)dealloc;


@end


#endif