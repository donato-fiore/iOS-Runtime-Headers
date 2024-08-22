// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKPLAYERREQUESTSEEKTODATEEVENTUSERINFO_H
#define IKPLAYERREQUESTSEEKTODATEEVENTUSERINFO_H

@class NSDate, NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerRequestSeekToDateEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSDate *proposedDate; // ivar: _proposedDate
@property (readonly, nonatomic) NSDate *requestedDate; // ivar: _requestedDate
@property (readonly, nonatomic) BOOL shouldSeek; // ivar: _shouldSeek
@property (readonly) Class superclass;


-(id)initWithRequestDate:(id)arg0 currentDate:(id)arg1 ;
-(void)processReturnJSValue:(id)arg0 inContext:(id)arg1 ;


@end


#endif