// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMCONTENT_H
#define IAMCONTENT_H

@class NSArray, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IAMContent : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSDictionary *contentParameters; // ivar: _contentParameters
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *images; // ivar: _images
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithICMessageContent:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 body:(id)arg2 images:(id)arg3 actions:(id)arg4 contentParameters:(id)arg5 identifier:(id)arg6 ;


@end


#endif