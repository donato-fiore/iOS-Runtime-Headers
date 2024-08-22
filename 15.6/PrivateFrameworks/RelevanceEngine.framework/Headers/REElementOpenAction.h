// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REELEMENTOPENACTION_H
#define REELEMENTOPENACTION_H

@class NSString, NSURL;


#import "REElementAction.h"

@interface REElementOpenAction : REElementAction

@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 applicationID:(id)arg1 ;
-(void)_performWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif