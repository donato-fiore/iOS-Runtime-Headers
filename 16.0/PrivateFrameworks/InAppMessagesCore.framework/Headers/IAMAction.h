// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMACTION_H
#define IAMACTION_H

@class NSDictionary, NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IAMAction : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *actionParameters; // ivar: _actionParameters
@property (readonly, copy, nonatomic) NSString *displayText; // ivar: _displayText
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL requiresDelegate; // ivar: _requiresDelegate
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithICAction:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayText:(id)arg1 url:(id)arg2 requiresDelegate:(BOOL)arg3 actionParameters:(id)arg4 ;


@end


#endif