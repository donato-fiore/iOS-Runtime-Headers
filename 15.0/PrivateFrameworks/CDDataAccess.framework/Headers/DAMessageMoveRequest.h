// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAMESSAGEMOVEREQUEST_H
#define DAMESSAGEMOVEREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DAMessageMoveRequest : NSObject

@property (retain, nonatomic) id *context; // ivar: _context
@property (copy, nonatomic) NSString *fromFolder; // ivar: _fromFolder
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *toFolder; // ivar: _toFolder


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initMoveRequestWithMessage:(id)arg0 fromFolder:(id)arg1 toFolder:(id)arg2 ;


@end


#endif