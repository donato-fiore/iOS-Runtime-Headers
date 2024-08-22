// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKTEXTSESSIONDATA_H
#define STKTEXTSESSIONDATA_H

@class NSString;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>


@interface STKTextSessionData : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *simLabel; // ivar: _simLabel
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)init;
-(id)initWithText:(id)arg0 simLabel:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif