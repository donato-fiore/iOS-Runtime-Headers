// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFQUOTEDCONTENTATTRIBUTION_H
#define MFQUOTEDCONTENTATTRIBUTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MFQuotedContentAttribution : NSObject

@property (readonly, copy, nonatomic) NSString *senderName; // ivar: _senderName
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)attributionWithSenderName:(id)arg0 ;
+(id)noAttribution;
+(id)unknownAttribution;
-(id)debugDescription;
-(id)initWithType:(NSInteger)arg0 senderName:(id)arg1 ;


@end


#endif