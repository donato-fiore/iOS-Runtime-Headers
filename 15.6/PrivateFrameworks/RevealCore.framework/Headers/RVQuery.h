// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RVQUERY_H
#define RVQUERY_H

@class NSString;
@protocol NSSecureCoding, RVQueryProtocol;

#import <Foundation/Foundation.h>


@interface RVQuery : NSObject <NSSecureCoding, RVQueryProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger queryID; // ivar: _queryID
@property (readonly, nonatomic) id *queryProvider; // ivar: _queryProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *userAgent; // ivar: _userAgent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 clientIdentifier:(id)arg1 userAgent:(id)arg2 queryID:(NSInteger)arg3 queryProvider:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif