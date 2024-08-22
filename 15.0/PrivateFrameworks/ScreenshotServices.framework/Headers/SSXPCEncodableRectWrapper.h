// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSXPCENCODABLERECTWRAPPER_H
#define SSXPCENCODABLERECTWRAPPER_H

@class NSString;
@protocol BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSXPCEncodableRectWrapper : NSObject <BSXPCCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect rect; // ivar: _rect
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)encodedRectsInDictionary:(id)arg0 forKey:(id)arg1 ;
+(void)encodeRects:(id)arg0 inDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif