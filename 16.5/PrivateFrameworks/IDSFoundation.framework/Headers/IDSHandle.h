// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSHANDLE_H
#define IDSHANDLE_H


#import <Foundation/Foundation.h>

#import "IDSURI.h"

@interface IDSHandle : NSObject

@property (readonly, nonatomic) IDSURI *URI; // ivar: _URI
@property (readonly, nonatomic) BOOL isUserVisible; // ivar: _isUserVisible
@property (readonly, nonatomic) NSInteger validationStatus; // ivar: _validationStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithURI:(id)arg0 isUserVisible:(BOOL)arg1 validationStatus:(NSInteger)arg2 ;


@end


#endif