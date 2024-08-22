// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property NSInteger sessionType; // ivar: _sessionType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)textInputSessionWithDuration:(CGFloat)arg0 sessionType:(NSInteger)arg1 sessionIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif