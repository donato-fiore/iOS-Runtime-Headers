// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKPLAYERSHOULDCHANGETOMEDIAATINDEXEVENTUSERINFO_H
#define IKPLAYERSHOULDCHANGETOMEDIAATINDEXEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL shouldChange; // ivar: _shouldChange
@property (readonly) Class superclass;


-(BOOL)expectsReturnValue;
-(id)initWithIndex:(NSInteger)arg0 ;
-(void)processReturnJSValue:(id)arg0 inContext:(id)arg1 ;


@end


#endif