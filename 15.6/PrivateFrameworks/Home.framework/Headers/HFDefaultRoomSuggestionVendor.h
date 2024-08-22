// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDEFAULTROOMSUGGESTIONVENDOR_H
#define HFDEFAULTROOMSUGGESTIONVENDOR_H

@class NSString, NSSet, NSURL;
@protocol HFRoomSuggestionVendor;

#import <Foundation/Foundation.h>


@interface HFDefaultRoomSuggestionVendor : NSObject <HFRoomSuggestionVendor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *roomSuggestions; // ivar: _roomSuggestions
@property (readonly, nonatomic) NSURL *roomSuggestionsPlistURL; // ivar: _roomSuggestionsPlistURL
@property (readonly) Class superclass;


+(id)TVAccessorySuggestionVendor;
+(id)homeAppSuggestionVendor;
-(id)init;
-(id)initWithRoomSuggestionsPlistURL:(id)arg0 ;
-(id)prioritizedRoomSuggestions;


@end


#endif