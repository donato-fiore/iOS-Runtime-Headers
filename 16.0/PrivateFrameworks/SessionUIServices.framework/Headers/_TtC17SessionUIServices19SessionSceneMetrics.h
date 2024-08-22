// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES19SESSIONSCENEMETRICS_H
#define _TTC17SESSIONUISERVICES19SESSIONSCENEMETRICS_H

@protocol NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface _TtC17SessionUIServices19SessionSceneMetrics : NSObject <NSSecureCoding, BSXPCCoding>



@property (nonatomic) CGFloat cornerRadius; // ivar: cornerRadius
@property (nonatomic) CGSize size; // ivar: size


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif