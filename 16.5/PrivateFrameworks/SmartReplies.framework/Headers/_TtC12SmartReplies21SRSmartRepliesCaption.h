// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES21SRSMARTREPLIESCAPTION_H
#define _TTC12SMARTREPLIES21SRSMARTREPLIESCAPTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies21SRSmartRepliesCaption : NSObject <NSSecureCoding, NSCopying>

 {
    ? caption;
}


@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSInteger type; // ivar: type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCaption:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif