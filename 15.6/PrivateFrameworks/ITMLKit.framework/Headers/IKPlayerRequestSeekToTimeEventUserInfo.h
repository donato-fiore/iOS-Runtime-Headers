// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKPLAYERREQUESTSEEKTOTIMEEVENTUSERINFO_H
#define IKPLAYERREQUESTSEEKTOTIMEEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerRequestSeekToTimeEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) CGFloat proposedTime; // ivar: _proposedTime
@property (readonly, nonatomic) CGFloat requestedTime; // ivar: _requestedTime
@property (readonly, nonatomic) BOOL shouldSeek; // ivar: _shouldSeek
@property (readonly) Class superclass;


-(id)initWithRequestedTime:(CGFloat)arg0 currentTime:(CGFloat)arg1 ;
-(void)processReturnJSValue:(id)arg0 inContext:(id)arg1 ;


@end


#endif