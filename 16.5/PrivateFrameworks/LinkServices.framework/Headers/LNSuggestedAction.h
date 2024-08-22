// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNSUGGESTEDACTION_H
#define LNSUGGESTEDACTION_H

@class LNAction, NSDictionary, LNSystemProtocol;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNSuggestedAction : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSDictionary *dialogParameters; // ivar: _dialogParameters
@property (readonly, nonatomic) LNSystemProtocol *systemProtocol; // ivar: _systemProtocol


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 systemProtocol:(id)arg1 dialogParameters:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif