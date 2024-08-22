// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTTSSPOKENVARIANT_H
#define WFTTSSPOKENVARIANT_H

@class NSString;
@protocol WFTTSStringAnnotation, WFTTSStringComponent;

#import <Foundation/Foundation.h>


@interface WFTTSSpokenVariant : NSObject <WFTTSStringAnnotation, WFTTSStringComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *spokenString; // ivar: _spokenString
@property (readonly) Class superclass;


+(id)parseAnnotationString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDisplayString:(id)arg0 spokenString:(id)arg1 ;


@end


#endif