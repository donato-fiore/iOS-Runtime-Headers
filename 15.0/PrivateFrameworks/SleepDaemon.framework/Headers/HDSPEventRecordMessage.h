// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPEVENTRECORDMESSAGE_H
#define HDSPEVENTRECORDMESSAGE_H

@class NSDate, NSString;
@protocol BSDescriptionProviding, HDSPIDSMessage;

#import <Foundation/Foundation.h>


@interface HDSPEventRecordMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *dateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif