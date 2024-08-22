// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSIDINFORESULT_H
#define IDSIDINFORESULT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IDSGameCenterData.h"
#import "IDSIDKTData.h"

@interface IDSIDInfoResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *endpoints; // ivar: _endpoints
@property (readonly, copy, nonatomic) IDSGameCenterData *gameCenterData; // ivar: _gameCenterData
@property (readonly, copy, nonatomic) IDSIDKTData *ktData; // ivar: _ktData
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 status:(NSInteger)arg1 endpoints:(id)arg2 ktData:(id)arg3 gameCenterData:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif