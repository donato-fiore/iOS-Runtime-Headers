// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKPLAYERTIMEDMETADATAEVENTUSERINFO_H
#define IKPLAYERTIMEDMETADATAEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerTimedMetadataEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *value; // ivar: _value


-(id)initWithKey:(id)arg0 value:(id)arg1 ;


@end


#endif