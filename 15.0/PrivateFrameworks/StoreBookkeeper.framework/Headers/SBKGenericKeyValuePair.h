// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKGENERICKEYVALUEPAIR_H
#define SBKGENERICKEYVALUEPAIR_H

@class NSString, NSData;
@protocol NSObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBKGenericKeyValuePair : NSObject <NSObject, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *kvsKey; // ivar: _kvsKey
@property (readonly, nonatomic) NSData *kvsPayload; // ivar: _kvsPayload
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)pairWithKVSKey:(id)arg0 kvsPayload:(id)arg1 ;
-(CGFloat)timestamp;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKVSKey:(id)arg0 kvsPayload:(id)arg1 ;
-(id)kvsValueDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif