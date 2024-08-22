// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRTEXTINPUTSESSION_H
#define SRTEXTINPUTSESSION_H

@class NSString;
@protocol SRSampleExporting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SRTextInputSession : NSObject <SRSampleExporting, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property NSInteger sessionType; // ivar: _sessionType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)textInputSessionWithDuration:(CGFloat)arg0 sessionType:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif