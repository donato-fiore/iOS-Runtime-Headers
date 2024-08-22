// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKUSSDSESSIONDATA_H
#define STKUSSDSESSIONDATA_H

@class NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface STKUSSDSessionData : NSObject <BSXPCCoding>



@property (readonly, nonatomic) BOOL allowsResponse; // ivar: _allowsResponse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithText:(id)arg0 allowsResponse:(BOOL)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif