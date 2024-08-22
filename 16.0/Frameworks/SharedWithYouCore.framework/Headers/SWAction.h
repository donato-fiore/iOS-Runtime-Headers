// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWACTION_H
#define SWACTION_H

@class BSAction, NSUUID;
@protocol NSCopying, NSSecureCoding, _SWActionResponseHandler;

#import <Foundation/Foundation.h>

#import "_SWActionResponse.h"

@interface SWAction : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) BSAction *destinationBSAction; // ivar: _destinationBSAction
@property (nonatomic) BOOL hasSentResponse; // ivar: _hasSentResponse
@property (retain, nonatomic) _SWActionResponse *response; // ivar: _response
@property (weak, nonatomic) NSObject<_SWActionResponseHandler> *responseHandler; // ivar: _responseHandler
@property (copy, nonatomic) id *responseHandlerBlock; // ivar: _responseHandlerBlock
@property (readonly, nonatomic) BSAction *sourceBSAction; // ivar: _sourceBSAction
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)actionWithDestinationAction:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAction:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationAction:(id)arg0 ;
-(void)_processResponse;
-(void)encodeWithBSActionSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fail;
-(void)failWithResponse:(id)arg0 ;
-(void)fulfill;
-(void)fulfillWithResponse:(id)arg0 ;


@end


#endif