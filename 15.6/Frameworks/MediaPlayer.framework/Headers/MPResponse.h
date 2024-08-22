// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPRESPONSE_H
#define MPRESPONSE_H

@class NSString, NSArray;
@protocol NSCopying, NSObject;

#import <Foundation/Foundation.h>


@interface MPResponse : NSObject <NSCopying, NSObject>



@property (readonly, nonatomic) id *builder; // ivar: _builder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *middleware; // ivar: _middleware
@property (readonly, copy, nonatomic) id *request; // ivar: _request
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)_stateDumpObject;
-(id)chain;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequest:(id)arg0 middleware:(id)arg1 ;
-(void)invalidate;


@end


#endif