// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES24SRSMARTREPLIESSUGGESTION_H
#define _TTC12SMARTREPLIES24SRSMARTREPLIESSUGGESTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies24SRSmartRepliesSuggestion : NSObject <NSSecureCoding, NSCopying>

 {
    ? title;
}


@property (nonatomic, readonly) BOOL isDynamicSuggestion; // ivar: isDynamicSuggestion
@property (nonatomic, readonly) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 isDynamicSuggestion:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif