// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES32SRSMARTREPLIESSUGGESTIONRESPONSE_H
#define _TTC12SMARTREPLIES32SRSMARTREPLIESSUGGESTIONRESPONSE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies32SRSmartRepliesSuggestionResponse : NSObject <NSSecureCoding, NSCopying>

 {
    ? suggestions;
}


@property (nonatomic, readonly) NSArray *suggestions;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif