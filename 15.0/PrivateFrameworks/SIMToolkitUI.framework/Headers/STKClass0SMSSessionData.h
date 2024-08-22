// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKCLASS0SMSSESSIONDATA_H
#define STKCLASS0SMSSESSIONDATA_H

@class NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface STKClass0SMSSessionData : NSObject <BSXPCCoding>



@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL showsFromAddress; // ivar: _showsFromAddress
@property (readonly) Class superclass;


-(id)initWithBody:(id)arg0 address:(id)arg1 showsFromAddress:(BOOL)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif