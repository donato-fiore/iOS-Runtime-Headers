// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TIKEYBOARDSECURECANDIDATE_H
#define _TIKEYBOARDSECURECANDIDATE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _TIKeyboardSecureCandidate : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) NSString *secureContent; // ivar: _secureContent
@property (readonly, nonatomic) NSString *secureFormattedContent; // ivar: _secureFormattedContent
@property (readonly, nonatomic) NSString *secureHeader; // ivar: _secureHeader
@property (readonly, nonatomic) NSString *truncationSentinel; // ivar: _truncationSentinel


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSecureHeader:(id)arg0 secureContent:(id)arg1 secureFormattedContent:(id)arg2 input:(id)arg3 truncationSentinel:(id)arg4 ;


@end


#endif