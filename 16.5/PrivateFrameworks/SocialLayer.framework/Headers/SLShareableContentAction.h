// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHAREABLECONTENTACTION_H
#define SLSHAREABLECONTENTACTION_H

@class BSAction, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLShareableContentAction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BSAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier


+(BOOL)supportsSecureCoding;
+(id)actionWithBSAction:(id)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfo:(id)arg0 responseHandler:(id)arg1 ;
-(id)initWithSceneIdentifier:(id)arg0 responseHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fail;
-(void)failWithError:(id)arg0 ;
-(void)fulfillWithResponse:(id)arg0 ;


@end


#endif